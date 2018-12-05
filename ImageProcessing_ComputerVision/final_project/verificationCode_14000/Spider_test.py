""""""
from selenium import webdriver
import time
import re
from pprint import  pprint
import json
import requests
from PIL import Image
import numpy as np
import cv2

#模拟登录慕课网
""""""
browser = webdriver.Chrome()
browser.set_window_size(1200, 800)

browser.get('https://www.imooc.com/#')#慕课登陆页面


button1 = browser.find_element_by_id('js-signin-btn')#点击出现输入密码及账户
button1.click()
time.sleep(3)

input1 = browser.find_element_by_xpath('//*[@id="signup-form"]/div[1]/input')##如果不是唯一class用xpath
input1.send_keys('1912490575@qq.com')
time.sleep(3)
input2 = browser.find_element_by_xpath('//*[@id="signup-form"]/div[2]/input')
input2.send_keys('dasdqrqwea')

button2 = browser.find_element_by_xpath('//*[@id="signup-form"]/div[5]/input')
button2.click()
time.sleep(3)

# 获取截图
browser.get_screenshot_as_file('screenshot.png')

# 获取指定元素位置
element = browser.find_element_by_xpath('//*[@id="signup-form"]/div[3]/a[1]/img')
left = int(element.location['x'])-38
top = int(element.location['y'])-10
right = int(element.location['x'] + element.size['width'])+38
bottom = int(element.location['y'] + element.size['height'])+10

# 通过Image处理图像
im = Image.open('screenshot.png')
im = im.crop((left, top, right, bottom))
im.save('yanzma.png')


time.sleep(1)
img = Image.open('yanzma.png')
img = np.array(img)
print(img.shape)  # img.shape打印高宽 (60, 160, 3)    muke(40, 84, 3)





#模拟登录微信公众号
"""
browser = webdriver.Chrome()
browser.get('https://mp.weixin.qq.com')
time.sleep(2)

browser.find_element_by_name('account').clear()  # 清空里面有的东西
input1 = browser.find_element_by_name('account')  # 这里没有ID是直接那么是
input1.send_keys('1922664316@qq.com')
browser.find_element_by_name('password').clear()
input2 = browser.find_element_by_name('password')
input2.send_keys('12345789bnm')

button1 = browser.find_element_by_class_name('icon_checkbox')
button1.click()
button = browser.find_element_by_class_name('btn_login')
button.click()
time.sleep(1)
button.click()
time.sleep(1)
button.click()
time.sleep(1)
button.click()
time.sleep(1)
# 获取截图
browser.get_screenshot_as_file('screenshot.png')

# 获取指定元素位置
element = browser.find_element_by_xpath('//*[@id="header"]/div[2]/div/div/form/div[2]/img')
left = int(element.location['x'])-19
top = int(element.location['y'])-5
right = int(element.location['x'] + element.size['width'])+18
bottom = int(element.location['y'] + element.size['height'])+5

# 通过Image处理图像
im = Image.open('screenshot.png')
im = im.crop((left, top, right, bottom))
im.save('yanzma.png')
# im1 = Image.open('yanzma.png')
# im1.save('yanzma.jpg')

time.sleep(1)
img = Image.open('yanzma.png')
img = np.array(img)
# print(img)
# print(img.shape)  # img.shape打印高宽 (60, 160, 3)    gzh(53, 130, 3)
browser.close()
"""







#测试
""""""
from image_processing import gen_captcha_text_and_image

import matplotlib.pyplot as plt
from PIL import Image

from training import convert2gray
from training import vec2text
from training import crack_captcha_cnn

import time
import training as tr
import numpy as np
import tensorflow as tf


def crack_captcha(captcha_image):
    output = crack_captcha_cnn()

    saver = tf.train.Saver()
    with tf.Session() as sess:
        saver.restore(sess, tf.train.latest_checkpoint("./"))

        predict = tf.argmax(tf.reshape(output, [-1, tr.MAX_CAPTCHA, tr.CHAR_SET_LEN]), 2)
        text_list = sess.run(predict, feed_dict={tr.X: [captcha_image], tr.keep_prob: 1})

        text = text_list[0].tolist()
        vector = np.zeros(tr.MAX_CAPTCHA * tr.CHAR_SET_LEN)
        i = 0
        for n in text:
            vector[i * tr.CHAR_SET_LEN + n] = 1
            i += 1
        return vec2text(vector)


if __name__ == '__main__':
    start = time.clock()

    text, image = gen_captcha_text_and_image()

    f = plt.figure()
    ax = f.add_subplot(111)
    ax.text(0.1, 1.1, text, ha='center', va='center', transform=ax.transAxes)
    plt.imshow(image)

    image = convert2gray(image)
    image = image.flatten() / 255
    predict_text = crack_captcha(image)
    print("predict: {}".format( predict_text))#

    end = time.clock()
    print('Running time: %s Seconds' % (end - start))

    plt.show()
