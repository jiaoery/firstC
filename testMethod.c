#include <stdio.h>

/* 函数返回两个数中较大的那个数 */
int max(int num1,int num2){
    return num1>num2?num1:num2;
}

int main(){
/* 局部变量定义 */
   int a ;
   int b ;
   int ret;
   printf("输入参数1：");
   scanf("%d",&a);
    printf("输入参数2：");
   scanf("%d",&b);
 
   /* 调用函数来获取最大值 */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}