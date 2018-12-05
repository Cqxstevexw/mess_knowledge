#改变输入图像亮度等，验证特征检测不变性
import  cv2
"""用于改变图像的亮度，做法是对图像的每一个像素点进行操作"""
img=cv2.imread('bicycle.jpg')
cv2.imshow('img',img)
rows,cols,channels=img.shape
dst=img.copy()

a=1.2
b=100
for i in range(rows):
    for j in range(cols):
        for c in range(3):
            color=img[i,j][c]*a+b
            if color>255:
                dst[i,j][c]=255
            elif color<0:
                dst[i,j][c]=0


cv2.imwrite('light.jpg',dst)

