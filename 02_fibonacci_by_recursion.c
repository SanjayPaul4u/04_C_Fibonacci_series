# include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int num;
    printf("How many time fibonacci should be come: \n");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", fib(i));
    }
    
    return 0;
};