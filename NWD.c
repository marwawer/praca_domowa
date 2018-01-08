#include <stdio.h>
int main()
{
    int a, b ;

    printf("Podaj liczbe calkowita a>0\n");
    scanf("%d", &a);
    printf("Podaj liczbe calkowita b>0\n");
    scanf("%d", &b);
    printf("NWD(%d i %d) = ", a, b);

    while ( b != a)
        if ( b > a)
            b = b - a;
        else
            a = a - b;
    printf("%d\n", a);
    return 0;
}
