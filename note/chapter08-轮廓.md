# chapter08-轮廓(Contours)

小结：本章介绍了：

1）OpenCV中查找轮廓的函数cvFindContours()；

2）内存存储器（memory storage）的概念；

3）序列（sequence）基本介绍（这在处理轮廓的时候通常需要使用序列）；

4）深入讨论了轮廓检测的某些细节；

5）讨论了轮廓检测的一些实际应用。

边缘检测——局部

轮廓——整体

## 8.1 内存(Memory Storage)

entity

thereafter

maner

analogous

Q：OpenCV中是如何管理各种动态对象的内存？

A：OpenCV使用内存存储器（memory storage）来统一管理各种动态对象的内存。

Q:OpenCV中内存存储是个什么样的机制?

A:内存存储是内存块(memory block)的双向**链表**(**linked lists**)，可以快速分配和取消分配(de-allocation)连续的块集。

Q：内存存储器是如何访问函数的？

A:在OpenCV中,关于内存存储有4个相关函数。需要从内存存储设计者的角度来思考为什么会设计这4种内存函数,具体看课本吧.

Q:如何比较`cvReleaseMemStorage()`和`cvClearMemStorage()`这两个函数?

## 8.2 序列(Sequences)

deque 双端队列

universe 

topology

**Q**:如何理解序列?

**A**:

1)序列是内存存储中可以存储的一种**对象**.序列是某种结构的**链表**;

2)可以将序列想象为许多编程语言中普遍存在的容器类或者容器类模板（如C++中的vector）；

3)由于OpenCV可以基于序列生成许多其他的对象,这和面向对象编程中的容器类模板(container class templates)很像;

4)事实上,在OpenCV中序列是由队列(deque)构成的.

### 8.2.1 创建序列(Creating a Sequence)

### 8.2.2 删除序列(Deleting a Sequence)

## 查找轮廓

Q：轮廓是什么？

A：一个轮廓一般对应一系列点的集合，也就是图像中的一条曲线。

Q：如何表示轮廓？

A：OpenCV中一般用**序列**（CvSeq）来存储轮廓信息，序列中的每一个元素是曲线中一个点的位置。

**Q**：如何理解**轮廓**和**孔**的概念（这真是个让人头晕的概念！）？

A：查看图8-2，记忆口诀：从外往里走，由黑变白即为轮廓，由白变黑即为孔。











