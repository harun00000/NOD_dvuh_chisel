#include "input_check.h"
#include <stdio.h>
void input_check(int count, int* num1, int* num2){
    do {
        count=scanf("%d %d", num1, num2);
        if (count==2){
            if(&num1>0 && &num2>0){
                break;
            }else{
                int ch;
                printf("numbers are not natural. please, try again: ");
                while ((ch=getchar()) != '\n');
            }
        }
        else{
            printf("input error. please, try again: ");
            int ch;
            while((ch=getchar()) != '\n');
        }
    }while(1);
}