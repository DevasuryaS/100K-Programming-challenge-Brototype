#include <stdio.h>

//Function without argument without return value:
/*void sum();

int main(void)
{
    sum();
    sum();
    return 0;
}

void sum()
{
    int n1,n2,sum;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = n1 + n2;

    printf("\nThe result is: %d \n",sum);
}*/

//Function with argument without return value

/*
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    sum(a,b);

    return  0;
}

void sum(int n1,int n2)
{
    int sum;

    sum = n1 + n2;

    printf("\t"
           "\nThe result is: %d \n",sum);
}*/

//Function with argument and with return value.

/*int sum(int,int);

int main(void)
{
    int a,b,r;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    r = sum(a,b);

    printf("The result  is: %d",r);

    return 0;
}

int sum(int n1, int n2)
{
    int result;

    result = n1+n2;

    return result;
}*/

//Function without arguments but with return value.

int sum();

int main()
{
    int r;

    r = sum();

    printf("Their sum is: %d",r);
}

int sum()
{
    int n1,n2,result;

    printf("Enter 2 numbers: ");
    scanf("%d %d",&n1,&n2);

    result = n1+n2;

    return result;

}