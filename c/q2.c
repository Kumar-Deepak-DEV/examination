#include <stdio.h>
int main(){
    int num1 =12;
    int num2 = 15;

    printf("before: 1st  no: %d, 2nd no: %d \n",num1 , num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1= num1-num2;
    printf("after reversing; 1st no: %d, 2nd no: %d",num1, num2 );
    return 0;

}