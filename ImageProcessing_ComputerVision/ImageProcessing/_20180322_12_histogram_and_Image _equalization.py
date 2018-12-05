# 1、画出灰度图的直方图      72~88页  20180322_12_蔡铨贤
# 2均衡化的图像表示出来

#作者，data，时间。

import cv2
import numpy as np
from matplotlib import pyplot as plt

#画出直方图
img = cv2.imread('1.1.tif', 0)
plt.hist(img.ravel(), 256, [0, 256])
plt.show()

#图像均衡化
image = cv2.imread("1.1.tif",0)#读取灰度图像
cv2.imshow("Original",image)
cv2.waitKey(0)
eq = cv2.equalizeHist(image)#灰度图像直方图均衡化
cv2.imshow("Histogram Equalization", np.hstack([image, eq]))
cv2.waitKey(0)