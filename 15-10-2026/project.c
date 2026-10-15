#include<stdio.h>
int main()
{
    int x;
    printf("enter order amount:");
    scanf("%d", &x);
    if(x < 70)
    {
        printf("order confirmed");
    }
    else
    {
        printf("order limit reached");
    }
    return 0;
}


