import cv2
import numpy as np
import matplotlib.pyplot as plt

img0 = cv2.imread('bicycle.jpg')
img = cv2.imread('bicycle.jpg')
gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#灰度图像 

plt.subplot(121),plt.imshow(gray,'gray')
plt.xticks([]),plt.yticks([])
#hough transform
circles1 = cv2.HoughCircles(gray,cv2.HOUGH_GRADIENT,1,
100,param1=100,param2=30,minRadius=80,maxRadius=90)
circles = circles1[0,:,:]#提取为二维
circles = np.uint16(np.around(circles))#四舍五入，取整
for i in circles[:]: 
    cv2.circle(img,(i[0],i[1]),i[2],(255,0,0),5)#画圆
    cv2.circle(img,(i[0],i[1]),2,(255,0,255),10)#画圆心

cv2.imwrite('houghcircle.jpg',img)

plt.suptitle("houghcircle")
plt.subplot(121), plt.imshow(img0, cmap='gray')
plt.title('Original Image'), plt.xticks([]), plt.yticks([])

img1 = cv2.imread('houghcircle.jpg')
plt.subplot(122), plt.imshow(img1, cmap='gray')
plt.title('line'), plt.xticks([]), plt.yticks([])
plt.show()
