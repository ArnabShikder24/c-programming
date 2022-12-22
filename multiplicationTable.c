#include <stdio.h>

int main()
{
    int n;
    printf("Which number do you need for multiplication table. please give: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++)  {
        printf("%d x %d = %d\n", n, i, i * n);
    }
    return 0;
}
