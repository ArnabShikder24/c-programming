#include <stdio.h>
int num(n);

int main()
{
    long long n;
    printf("give me a number: ");
    scanf("%lld", &n);
    long long value = num(n);
    printf("%lld", value);
    return 0;
}

int num(long long n)
{
    long long sum = 0;
    for(long long i = 1; i <= n; i++) {
        if(i % 2 == 1)
            sum -= i;
        else if(i % 2 == 0)
            sum += i;
    }
    return sum;
}
