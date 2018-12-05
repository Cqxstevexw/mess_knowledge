#输入并且显示图片
"""

import numpy as np
import cv2
# Load an color image in grayscale
img = cv2.imread('1.jpg',0)
#cv2.imread()有第二个参数 cv2.IMREAD_COLOR：
# 加载彩色图像。图像的任何透明度都将被忽略。这是默认标志。
# cv2.IMREAD_GRAYSCALE：以灰度模式加载图像
# cv2.IMREAD_UNCHANGED：加载包含Alpha通道的图像
# 注意 而不是这三个标志，你可以简单地传递整数1，0或-1。
cv2.imshow('image',img)
cv2.waitKey(0)
cv2.destroyAllWindows()




######Matplotlib显示图像###########################################################
import numpy as np
import cv2
from matplotlib import pyplot as plt
img = cv2.imread('1.jpg',0)
plt.imshow(img, cmap = 'gray', interpolation = 'bicubic')
plt.xticks([]), plt.yticks([])  # to hide tick values on X and Y axis
plt.show()
"""

#视频
"""
###从相机中捕捉视频将其转换为灰度视频并显示出来########################################
import numpy as np
import cv2

cap = cv2.VideoCapture(0)   #先创建一个VideoCapture对象，参数可以是设备索引或视频文件的名称
while(True):
    # Capture frame-by-frame
    ret, frame = cap.read()  #ret 是用来改显示的参数的
    # cap.get（3）和cap.get（4）来检查框架的宽度和高度。它默认给我640x480。
    # 但我想修改为320x240。
    # 只需使用ret = cap.set（3, 320）和ret = cap.set（4, 240）

    # Our operations on the frame come here
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Display the resulting frame
    cv2.imshow('frame',gray)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()


##从文件播放视频##########################################################
import numpy as np
import cv2

cap = cv2.VideoCapture('NBA.avi')

while(cap.isOpened()):
    ret, frame = cap.read()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    cv2.imshow('frame',gray)
    if cv2.waitKey(30) & 0xFF == ord('q'):     #cv2.waitKey(30)单位是毫秒
        break

cap.release()
cv2.destroyAllWindows()


###保存视频，输出是垂直旋转的########################################

import numpy as np
import cv2
cap = cv2.VideoCapture(0)
# Define the codec and create VideoWriter object
fourcc = cv2.VideoWriter_fourcc(*'XVID')  #选择分辨率
out = cv2.VideoWriter('output.avi',fourcc, 20.0, (640,480)) #20.0是帧数，后面那个是显示的大小
while(cap.isOpened()):
    ret, frame = cap.read()
    if ret==True:
        frame = cv2.flip(frame,0)

        # write the flipped frame
        out.write(frame)

        cv2.imshow('frame',frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break
# Release everything if job is finished
cap.release()
out.release()
cv2.destroyAllWindows()

"""

#绘制函数
"""
https://docs.opencv.org/3.0-beta/doc/py_tutorials/py_gui/py_drawing_functions/py_drawing_functions.html#drawing-functions
"""

#鼠标作为画笔
"""
https://docs.opencv.org/3.0-beta/doc/py_tutorials/py_gui/py_mouse_handling/py_mouse_handling.html#mouse-handling
"""

#Trackbar作为调色板
"""
https://docs.opencv.org/3.0-beta/doc/py_tutorials/py_gui/py_trackbar/py_trackbar.html#trackbar
"""



