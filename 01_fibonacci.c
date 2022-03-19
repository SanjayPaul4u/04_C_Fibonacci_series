// hint:
// fib(n) = fib(n-1) + fib(n-2)
// fib(1) = 0
// fib(2) = 1

# include<stdio.h>

int main(){
    int num1=0, num2=1, num3, count=10; 

    printf("%d\n%d\n",num1,num2);
    for (int i = 3; i < count; i++)
    {
        num3 =num1+num2;
        printf("%d\n",num3);

        num1=num2;
        num2=num3;

    }
    
    return 0;
};