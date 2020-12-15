#include <stdio.h>
int sumOfEvenOdd(int first, int last);
int main()
{
    int first, last, sum;
    printf("Enter lower limit: ");
    scanf("%d", &first);
    printf("Enter upper limit: ");
    scanf("%d", &last);
    printf("Sum of even/odd numbers between %d to %d = %d\n", first, last, sumOfEvenOdd(first, last));
    return 0;
}
int sumOfEvenOdd(int first, int last) 
{
    if(first > last)
        return 0;
    else
        return (first + sumOfEvenOdd(first + 2, last));
}
