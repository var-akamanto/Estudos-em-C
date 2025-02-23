#include <stdio.h>

int main ()
{
    int a1,a2,b1,b2;
    printf("Digite dois valores : \n");
    scanf("%d%d", &a1, &b1);
    a2 = b1;
    b2 = a1;
    printf("%d %d", a2,b2);
    return 0;
}