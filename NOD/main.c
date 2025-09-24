#include <stdio.h>

// Функция вычисления НОД по алгоритму Евклида
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Введите два целых числа: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    int result = gcd(num1, num2);

    printf("НОД чисел %d и %d равен %d\n", num1, num2, result);

    return 0;
}