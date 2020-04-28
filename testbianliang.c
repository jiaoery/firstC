#include <stdio.h>

int x;
int y;
int addTwoNum(){
    //函数声明x和y为外部变量
    extern int x;
    extern int y;
    //给外部变量（全局变量）赋值
    x = 1;
    y = 2;
    return x+y;
}

int main(){
    int result;
    //调用函数addTwoNum
    result = addTwoNum();
    printf("result 结果为 %d",result);
    return 0;

}