#include <stdio.h>

void solve (int num)
{
    if (num == 1)
        printf("1");
    else
    {
        int n = num % 2;
        solve (num / 2);
        printf("%d", n);
    }
}

int main(void)
{
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    solve(num);
    return 0;
}
