#模拟浏览器下载验证码，失败因为会变化
"""
import urllib.request
import urllib.parse

url = 'https://www.imooc.com/passport/user/verifycode?t=1530100117665'

# 携带cookie进行访问
headers = {
    'GET https': '//weibo.cn/5273088553/info HTTP/1.1',
    'Host': ' www.imooc.com',
    'Accept-Encoding': 'gzip, deflate, br',
    'Connection':'keep-alive',
    'User-Agent': ' Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.62 Safari/537.36',
    'Accept': ' image/webp,image/apng,image/*,*/*;q=0.8',
    'Referer':'https://www.imooc.com/',
    'Accept-Language': 'zh-CN,zh;q=0.9',
    'Cookie': 'PHPSESSID=fj0un6n568jdf5j1bt2rud06b7; imooc_uuid=e38efac0-eacc-4a7d-a1ad-bbe7e0bc42a2; imooc_isnew=1; imooc_isnew_ct=1530099807; IMCDNS=0; Hm_lvt_fb538fdd5bd62072b6a984ddbc658a16=1530099812; Hm_lvt_f0cfcccd7b1393990c78efdeebff3968=1530099815; Hm_lpvt_fb538fdd5bd62072b6a984ddbc658a16=1530100095; Hm_lpvt_f0cfcccd7b1393990c78efdeebff3968=1530100098; cvde=5b33785fc62f0-10',
}
request = urllib.request.Request(url=url, headers=headers)
response = urllib.request.urlopen(request)
# 输出所有
# print(response.read().decode('gbk'))
# 将内容写入文件中
with open('weibo.jpg', 'wb') as fp:
    fp.write(response.read())
"""


#用来查看照片的宽高

import cv2
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
def gen_captcha_text_and_image():

    png = Image.open('yanzma.png')
    png.load()  # required for png.split()

    background = Image.new("RGB", png.size, (255, 255, 255))
    background.paste(png, mask=png.split()[3])  # 3 is the alpha channel

    background.save('foo.jpg', 'JPEG', quality=80)
    text = 'yanzma'
    img1 = Image.open('foo.jpg')

    img1 = np.array(img1)
    plt.imshow(img1)
    return text,img1

#    print(img,img.shape)   #img.shape打印高宽 (60, 160, 3)    gzh(53, 130, 3)

#测试
if __name__ == '__main__':

    text, image = gen_captcha_text_and_image()
    print(image.shape)






