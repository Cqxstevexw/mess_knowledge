import cv2 as cv
import matplotlib.pyplot as plt
image = cv.imread("zzq.jpg")
dst=cv.pyrMeanShiftFiltering(image,50,100)
gray=cv.cvtColor(dst,cv.COLOR_BGR2GRAY)
ret,thresh=cv.threshold(gray,80,250,cv.THRESH_BINARY_INV)

plt.subplot(141), plt.imshow(image, cmap='gray')
plt.title('image'), plt.xticks([]), plt.yticks([])
plt.subplot(142), plt.imshow(dst, cmap='gray')
plt.title('dst'), plt.xticks([]), plt.yticks([])
plt.subplot(143), plt.imshow(gray, cmap='gray')
plt.title('gray'), plt.xticks([]), plt.yticks([])
plt.subplot(144), plt.imshow(thresh, cmap='gray')
plt.title('thresh'), plt.xticks([]), plt.yticks([])
plt.show()