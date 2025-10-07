#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    float a;
    float b;
    float c;
    printf("Please enter first number: ");
    scanf("%f",&a);
    printf("Please enter second number: ");
    scanf("%f",&b);
    printf("Please enter third number: ");
    scanf("%f",&c);
    float avg;how to ada
    avg = (a+b+c)/3;
    printf("The average of the numbers is %f",avg);
    return 0;
}*/

int main()
{
    int temp;
    int a;
    int b;
    a = 10;
    b = 20;
    printf("this is a and b before swapping: \n");
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    /*temp = a;
    a = b;
    b = temp;*/
    a = a+b;
    b = a-b;
    a = a-b;

    printf("this is a and b after swapping:  \n");
    printf("a = %d \n",a);
    printf("b = %d \n",b);

    return 0;

}

