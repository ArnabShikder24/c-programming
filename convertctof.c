#include <stdio.h>
// #define fahrenheit (input * 9/5) + 32
// #define celsius (input - 32) * 5/9

int main()
{
    char input;
    float result, temp;
    printf("Press c for convert fahrenheit to celsius\n");
    printf("Press f for convert celsius to fahrenheit\n");
    printf("Enter your choice (c, f):");
    scanf("%c", &input);
    printf("Enter your tempature :");
    scanf("%f", &temp);
    if(input == 'c' || input == 'C') {
        result =(temp - 32)*5/9.0;
        printf("celsius = %.3f", result);
    }
    return 0;
}
