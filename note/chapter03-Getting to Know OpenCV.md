# chapter03-初探OpenCV（Getting to Know OpenCV）

## OpenCV的基本数据类型(OpenCV Primitive Data Types)

参考资料：[cxtypes.h](https://github.com/cybertk/opencv/blob/master/opencv/cxcore/include/cxtypes.h)

**Q**:OpenCV中有哪些基本数据类型?

**A**:CvPoint,CvSize,CvRect和CvScalar,这些都是都是基本数据类型,只有成员变量而没有成员函数. P.S 表3-1详细的介绍了这4种基本数据类型的成员和意义.

### 矩阵和图像类型(Matrix and Image Types)

**小结**:本小节介绍了OpenCV中3个图像类型的层次,具体为lplImage,CvMat和CvArr.可以将lplImage看作CvMat的派生,CvMat是CvArr的派生.

Q:IplImage数据类型是什么?

A:IplImage是"图像"进行编码的基本结构.这里讲的图像是广义上的图像,包括灰度,彩色,4通道(RGB+alpha),其中每个通道可以包含任意的整数或浮点数.

Q:为什么在函数原型中,会经常看到CvArr(更准确地说是:CvArr*)?

A:因为CvArr是"基类",便于将CvMat* 或 IplImage*传递到程序中.

## CvMat矩阵结构(CvMat Matrix Structure)

Q:在OpenCv中,创建矩阵的方式有哪些?

A:

1)`cvCreateMat()`,该方法由多个原函数组成,如`cvCreateMatHeader()`(创建CvMat结构)和cvCreateData()(分配数据内存);

2)单独使用cvCreateMatHeader();

3)使用cvCloneMat(CvMat*). P.S 使用cvReleaseMat(CvMat*)释放它.

### 矩阵数据的存取

#### 简单的方法

Q：如何给**CvMat***型的数据赋值？

A：使用CV_MAT_ELEM()或CV_MAT_ELEM_PTR()，具体见书本例3-5。

### 麻烦的方法

Q：为什么要引出**麻烦的方法**？

A：因为**简单的方法**仅仅支持1维或2维的数组。

OpenCV提供了cvPtr1D，通过指针访问矩阵结构。











