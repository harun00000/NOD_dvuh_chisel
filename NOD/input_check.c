#include "input_check.h"
#include <stdio.h>
void input_check(int count, int num1, int num2){
    do {
        count=scanf("%d %d", num1, num2);
        if (count==2){
            break;
        }else{
            printf("input error. please, try again");
            int ch;
            while((ch=getchar()) != '\n');
        }
    }while(1);
}