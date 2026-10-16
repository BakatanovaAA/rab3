#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define D 2.54
#define P 2.32166
#define S 2.7076

int summa(int a, int b);
int raznost(int a, int b);
int proizv(int a, int b);
float chastnoe(int a, int b);
int ostatok(int a, int b);
float to_cm(int dym, float k);

int main()
{
    int num, num2;
    int sm, rz, pr, os;
    float ch;
    int dym;
    float result;
    int a, b;

    system("chcp 1251");
    setlocale(LC_ALL, "RUS");

    puts("Введите число\n");
    scanf("%d", &num);
    printf("Введено число %d\n", num);
    puts("Введите число\n");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    sm = summa(num, num2);
    rz = raznost(num, num2);
    pr = proizv(num, num2);
    ch = chastnoe(num2, num);
    os = ostatok(num2, num);
    printf("Сумма %d, Разность %d, Произведение %d, Частное %.2f, Остаток %d\n", sm, rz, pr, ch, os);

    printf("Введите данные для расчета\n");
    scanf("%d", &dym);
    result = to_cm(dym, D);
    printf("%d английских дюймов - это %.1f см\n", dym, result);
    result = to_cm(dym, P);
    printf("%d испанских дюймов - это %.1f см\n", dym, result);
    result = to_cm(dym, S);
    printf("%d старолитовских дюймов - это %.1f см\n", dym, result);

    puts("Введите число a\n");
    scanf("%d", &a);
    puts("Введите число b\n");
    scanf("%d", &b);

    pr = proizv(a, b);
    sm = summa(a, b);
    rz = raznost(a, b);

    printf("----------------------------------\n");
    printf("|%7s   |%7s   |%7s   |\n", "a*b", "a+b", "a-b");
    printf("----------------------------------\n");
    printf("|%5d*%-4d|%5d+%-4d|%5d-%-4d|\n", a, b, a, b, a, b);
    printf("----------------------------------\n");
    printf("|%7d   |%7d   |%7d   |\n", pr, sm, rz);

    return 0;
}

int summa(int a, int b)
{
    int res;
    res = a + b;
    return res;
}

int raznost(int a, int b)
{
    int res;
    res = a - b;
    return res;
}

int proizv(int a, int b)
{
    int res;
    res = a * b;
    return res;
}

float chastnoe(int a, int b)
{
    float res;
    res = a * 1.0 / b;
    return res;
}

int ostatok(int a, int b)
{
    int res;
    res = a % b;
    return res;
}

float to_cm(int dym, float k)
{
    float res;
    res = k * dym;
    return res;
}