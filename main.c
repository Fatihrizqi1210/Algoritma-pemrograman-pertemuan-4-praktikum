#include <stdio.h>

#define TRUE 1

int main(void)
{
    double a, b;

    while (TRUE)
    {
        printf("Masukkan bilangan pembilang : ");
        scanf("%lf", &a);

        printf("Masukkan bilangan pembagi : ");
        scanf("%lf", &b);

        if (b == 0)
        {
            printf("Pembagi tidak boleh 0!\n");
            continue;
        }

        printf("Hasil pembagian : %.0lf\n", a / b);
        break;
    }

    return 0;
}