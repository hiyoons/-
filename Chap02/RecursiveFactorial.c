#include <stdio.h>

int Factorial(int n)
{
    if (n == 1)
        return n;
    else
        return n * Factorial(n - 1);
}

int main(void)
{

    printf("1! 의 정답: %d\n", Factorial(1));
    printf("2! 의 정답: %d\n", Factorial(2)); // 2*1 => n*Factorial(n-1) -> 2*facorial(1)= 2*1
    printf("3! 의 정답: %d\n", Factorial(3)); // 3*2*1 => 3*Factorial(2)=> Factorial(2) = 2* Facorial(1)=> 1
    printf("4! 의 정답: %d\n", Factorial(4)); // 4*3*2*1
    printf("9! 의 정답: %d\n", Factorial(9));
    return 0;
}