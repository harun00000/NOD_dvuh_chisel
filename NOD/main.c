#include <stdio.h>
#include "evclid.h"
#include "input_check.h"

int main() {
    int count = 0, num1=0, num2=0, result=0;
    printf("Input 2 different numbers: ");
    input_check(count, &num1, &num2);

    result = evclid(num1, num2);

    printf("NOD chisel is %d\n", result);

    return 0;
}