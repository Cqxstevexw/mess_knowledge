# -*- coding: UTF-8 -*-

from PIL import Image

# 读取图像
im = Image.open("2.1.tif")
#im.show()

# 指定逆时针旋转的角度
im_rotate = im.rotate(45)
#im_rotate.show()

