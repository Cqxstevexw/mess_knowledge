
import cv2
import matplotlib.pyplot as plt

stitcher = cv2.createStitcher(False)
foo = cv2.imread("foo.png")
bar = cv2.imread("bar.png")
result = stitcher.stitch((foo,bar))

cv2.imwrite("result.jpg", result[1])
# plt.subplot(122), plt.imshow(img1, cmap='gray')
# plt.title('line'), plt.xticks([]), plt.yticks([])
# plt.show()
