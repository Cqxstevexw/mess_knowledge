#分析sift返回数据格式
import cv2
import numpy as np

def sift(pic):
    """这是个sift变换，填入参数为picture"""
    #read image
    img = cv2.imread(pic, cv2.IMREAD_COLOR)
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    cv2.imshow('origin',img)

    #SIFT
    sift= cv2.xfeatures2d.SIFT_create()
    keypoints = sift.detect(gray, None)

    #kp, des = sift.detectAndCompute(gray,None)  #des是描述子，for match， should use des, bf = cv2.BFMatcher();smatches = bf.knnMatch(des1,des2, k=2
    cv2.drawKeypoints(gray, keypoints, img)
    cv2.imshow('testSift', img)

    print(type(keypoints))
    print(keypoints)

    cv2.waitKey(0)
    cv2.destroyAllWindows()

    print(type(keypoints))
    print(keypoints)


sift('bicycle.jpg')
sift('light.jpg')