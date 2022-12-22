#include <stdio.h>
int main()
{
    int x, a, sum = 0;
    printf("How many number do you want to sum?\n");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}
