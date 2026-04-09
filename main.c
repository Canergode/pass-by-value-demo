#include <stdio.h>
#include <stdlib.h>

// This function swaps locally only-original values are not changed
void swap(int val1,int val2)
{
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;

    printf("Inside function-First:%d Second:%d\n",val1,val2);
}

int main()
{
    int a=10,b=20;

    printf("Before function call:%d %d\n",a, b);
    swap(a, b);
    printf("After function call:%d %d\n",a, b);

    return 0;
}
