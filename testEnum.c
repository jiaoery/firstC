#include <stdio.h>
//测试枚举
enum DAY{
    Mon=1,TUE, WED, THU, FRI, SAT, SUN
};

int main(){
    enum DAY day;
    day = WED;
    printf("%d",day);
    return 0;
}