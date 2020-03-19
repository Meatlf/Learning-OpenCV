# chapter03-Getting to Know OpenCV-代码笔记

## ch3_ex3_3.cpp

使用cvInitMatHeader()初始化CvMat.

## ch3_ex3_4.cpp

使用cvInitMatHeader()初始化CvMat.

## ch3_ex3_9.cpp

1）sum()函数介绍了CvMat*型数据的使用；

2）使用CV_MAT_ELEM_PTR给CvMat*元素赋值;

3)CvMat*的元素data是一个联合体。所以，对这个指针解引用的时候，必须指明结构体中的正确的元素以便得到正确的指针类型。

