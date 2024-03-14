#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    while (N > 0)
    {
        int digit = N % 10;
        if (digit % 2 != 0)
        {
            sum += digit;
        }
        N /= 10;
    }
    sum *= 3;
    printf("%d\n", sum);
    return 0;
}
