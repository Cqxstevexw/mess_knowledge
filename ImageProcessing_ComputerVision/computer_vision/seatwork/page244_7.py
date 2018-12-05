import cv2
import numpy as np
from matplotlib import pyplot as plt

img = cv2.imread('D:/practice/Python/ImageProcessing_ComputerVision/picture/man.tif',0)

def canny(x,y,locating,show_name):
    """x,y分别是阈值上下限，location是图片的位置,show_name是显示输出图片的名字,填入高阈值的范围
        进行canny批量处理及展示
    """
    edges = cv2.Canny(img, x,y)
    pic_name = str(x)+"--" +str (y)
    plt.subplot(locating), plt.imshow(edges, cmap='gray')
    plt.title(pic_name), plt.xticks([]), plt.yticks([])

def Seven(k):
    """
    Sevent 是第七道作业题的意思
    k 是高阈值和低阈值之间的比
    """
    coefficient = "coefficient:"+str(k)
    plt.suptitle(coefficient)
    plt.subplot(231), plt.imshow(img, cmap='gray')
    plt.title('Original Image'), plt.xticks([]), plt.yticks([])
    canny(int(50/k),50,232,50)
    canny(int(100/k),100,233,100)
    canny(int(150/k),150,234,150)
    canny(int(200/k),200,235,200)
    canny(int(250/k),250,236,250)
    plt.show()

Seven(1.5)
Seven(2.75)
Seven(4)



