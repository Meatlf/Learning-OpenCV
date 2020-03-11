// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// #define MAX_RANDOM_VALUE 100
// #define MIN_RANDOM_VALUE -100

// /**
//  * 
//  * 在线法
//  * 算法复杂度为O(n)
//  **/
// int maxSubseq(int a[], int K, int* begin, int* end)
// {
//     int i;
//     int sum=0;
//     int maxSum=0;
//     int *beginTemp=a,*endTemp=a+K-1;

//     for(i=0;i<K;i++){
//         sum=sum+a[i];
//         if(sum>maxSum){
//             maxSum = sum;
//             *begin=*beginTemp;
//             *end=*endTemp;
//         }
//         if(sum<0){
//             sum=0;          
//             beginTemp=a+i+1;
//             endTemp=beginTemp;
//         }
//         else
//             endTemp=a+i+1;
//     }
//     return maxSum;
// }

// // 参考资料: [C/C++ 生成随机数](https://blog.csdn.net/YF_Li123/article/details/75220786)
// void generateRandomNumber(int a[], int K){
//     std::srand(std::time(nullptr)); // 以当前时间为随机生成器的种子
 
//     for (int n = 0; n != K; ++n) {
//         a[n] = std::rand() % (MAX_RANDOM_VALUE-MIN_RANDOM_VALUE+1)+MIN_RANDOM_VALUE;
//         // std::cout << a[n]<<std::endl;
//     }
// }

// int main()
// {
// #if 0
//   int K;
//   std::cout << "Please input array's length:";
//   std::cin >> K;
//   int* a=(int*)malloc(K*sizeof(int));
//   generateRandomNumber(a,K);
// #else
//   int K;
//   std::cin>>K;
//   int* a=(int*)malloc(sizeof(int)*K);
//   for(int k=0;k<K;k++)
//   { std::cin>>a[k];
//   }
// #endif
//   int beginTemp = a[0];
//   int endTemp = a[K-1];
//   int*begin=&beginTemp,*end=&endTemp;
//   std::cout << "The maximun sub sequential's value is:";
//   std::cout << maxSubseq(a,K,begin,end) << " " << *begin<<" "<< *end << std::endl;

//   return 0;
// }


// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// /**
//  * 
//  * 在线法
//  * 算法复杂度为O(n)
//  **/
// int maxSubseq(int a[], int K, int* begin, int* end)
// {
//     int i;
//     int sum=0;
//     int maxSum=0;
//     int *beginTemp=a,*endTemp=a+K-1;

//     for(i=0;i<K;i++){
//         sum=sum+a[i];
//         if(sum>maxSum){
//             maxSum = sum;
//             *begin=*beginTemp;
//             *end=*endTemp;
//         }
//         if(sum<=0){         // 如果是sum<0,"当最大和前面有一段是0"会产生bug.
//             sum=0;          
//             beginTemp=a+i+1;
//             endTemp=beginTemp;
//         }
//         else
//             endTemp=a+i+1;
//     }
//     return maxSum;
// }

// int main()
// {
//   int K;
//   std::cin>>K;
//   int* a=(int*)malloc(sizeof(int)*K);
//   for(int k=0;k<K;k++)
//   { std::cin>>a[k];
//   }

//   int beginTemp = a[0];
//   int endTemp = a[K-1];
//   int*begin=&beginTemp,*end=&endTemp;

//   std::cout << maxSubseq(a,K,begin,end) << " " << *begin<<" "<< *end << std::endl;

//   return 0;
// }


#include<iostream>
#include<math.h>

int tmin(void) {
  return 0x1<<31;
}

int isTmax(int x) {
  int i = x+1;//Tmin,1000...
  x=x+i;//-1,1111...
  x=~x;//0,0000...
  i=!i;//exclude x=0xffff...
  x=x+i;//exclude x=0xffff...
  return !x;
}

int main()
{
    int x = 0b01111111111111111111111111111111;
    short y=0b1000000000000000;
    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<tmin()<<std::endl;
    std::cout<<pow(2,31)<<std::endl;
    // int x = 0b11111111111111111111111111111111;
    // std::cout<<isTmax(x)<<std::endl;
    return 0;
}