import cv2
import numpy as np
from matplotlib import pyplot as plt

filename = 'Checkerboard.jpg'
img0 = cv2.imread(filename,0)
img = cv2.imread(filename)
gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

gray = np.float32(gray)
dst = cv2.cornerHarris(gray,2,3,0.04)

#result is dilated for marking the corners, not important
dst = cv2.dilate(dst,None)

# Threshold for an optimal value, it may vary depending on the image.
img[dst>0.01*dst.max()]=[0,0,255]

plt.suptitle("Harris Corner Detector in OpenCV")
plt.subplot(121), plt.imshow(img0, cmap='gray')
plt.title('Original Image'), plt.xticks([]), plt.yticks([])
plt.subplot(122), plt.imshow(img, cmap='gray')
plt.title('Harris'), plt.xticks([]), plt.yticks([])
plt.show()
cv2.imshow('Checkerboard',img)
if cv2.waitKey(0) & 0xff == 27:
    cv2.destroyAllWindows()