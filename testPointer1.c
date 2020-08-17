#include <stdio.h>

int main(){
    //实际值
    int var = 20;
    //声明指针变量
    int *p ;
 /* 在指针变量中存储 var 的地址 */
     p = &var;

     printf("Address of var variable: %p\n", &var  );
 
   /* 在指针变量中存储的地址 */
   printf("Address stored in ip variable: %p\n", p );
 
   /* 使用指针访问值 */
   printf("Value of *ip variable: %d\n", *p );
 
   return 0;



}