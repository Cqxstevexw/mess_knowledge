#图像的基本操作

# 访问像素值并修改它们，访问图像属性，设置图像区域（ROI），分割和合并图像
# 本节中几乎所有的操作都与Numpy相关，而不是OpenCV。需要熟悉Numpy才能使用OpenCV编写更好的优化代码

import cv2
import numpy as np

img = cv2.imread('1.jpg')
px = img[100,100]  #打印坐标是100,100的像素值，如果rgb就是3个，如果是灰度图就是一个值
print(px)

# 只打印蓝色的像素值
blue = img[100,100,0]
print(blue)

#对图像的算术运算

#绩效测量和改进技术

#opencv中的数学工具