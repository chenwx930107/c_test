#include <stdio.h>

int compare(int a, int b);
int main()
{
    int a = 20;
    int b = 30;
    int Max = 0;
    Max = compare(a, b);
    printf("a和b中的最大数为：%d\n", Max);
    return 0;
}

int compare(int a, int b)
{
    int iMax = 0;
    if (a >= b)
    {
        iMax = a;
    }
    else
    {
        iMax = b;
    }
    
    return iMax;
}