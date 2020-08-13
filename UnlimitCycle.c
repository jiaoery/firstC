#include <stdio.h>
// 无限死循环，在开发中一定要避免
int main(){
    for( ; ; )
   {
      printf("该循环会永远执行下去！\n");
   }
   return 0;
}