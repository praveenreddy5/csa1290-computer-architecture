#include <stdio.h>
#define CHAR_SIZE   8
#define ARRAY_SIZE sizeof(int)* CHAR_SIZE
int main()
{
    int i = 0,j =0;
    //num for decimal number
    long long num = 0;
    //Array to store octal number
    int octalNum[ARRAY_SIZE];
    printf("Enter decimal number: ");
    scanf("%lld", &num);
    while (num > 0)
    {
        octalNum[i] = (num % 8);
        num = (num / 8);
        i++;
    }
    // printing octal array in reverse order
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d",octalNum[j]);
    }
    return 0;
}
