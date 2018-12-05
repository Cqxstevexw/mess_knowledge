#encoding:utf-8

import cv2
import numpy as np
import matplotlib.pyplot as plt

#对所给图像进行分割(阈值法）
img = cv2.imread('1.2.png',0) #直接读为灰度图像
ret,thresh1 = cv2.threshold(img,127,255,cv2.THRESH_BINARY)     #实现二值法
cv2.imshow("image binaryzation", np.hstack([thresh1]))
cv2.waitKey(0)

##去噪
lbimg = cv2.medianBlur(thresh1, 3)                     #实现中值滤波
cv2.imshow('Denoising', lbimg)
cv2.waitKey(0)
cv2.destroyAllWindows()

#填充孔洞
kernel = np.ones((5,5),np.uint8)
erosion = cv2.dilate(lbimg,kernel,1)
cv2.imshow('Fill Hole', erosion)
cv2.waitKey(0)

#k-means