#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<0){
    printf("The number is negative.");
    }
    else{
        printf("The number is positive.");
    }
    return 0;
}*/

/*int main()
{
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("first number is greater than second number.");
    }
    else
    {
        printf("second number is greater than first number.");
    }

}*/

/*int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("First number is the greatest.");
    }
    else if(b>c && b>a)
    {
        printf("Second number is the greatest.");
    }
    else if(c>a && c>b)
    {
        printf("Third number is the greatest.");
    }
    else
    {
        printf("All the numbers are same.");
    }
    return 0;
}*/

/*int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    printf("-------------MENU------------- \n");

    printf("1.Add \n");
    printf("2.Subtract \n");
    printf("3.Multiply \n");
    printf("4.Divide \n");

    int c;
    printf("Choose the operation you want perform by typing the option number of your choice: ");
    scanf("%d",&c);

    if(c==1)
    {
        int sum;
        sum = a+b;
        printf("Sum = %d",sum);
    }

    else if(c==2)
    {
        int diff;
        diff = a-b;
        printf("Difference = %d",diff);
    }
    else if(c==3)
    {
        int pro;
        pro = a*b;
        printf("Product = %d",pro);
    }
    else if(c==4)
    {
        double div;
        div = a/b;
        printf("Quotient = %d",div);
    }
    else
    {
        printf("Invalid Choice!");
    }
    return 0;
}*/

int main()
{
    printf("-------------MENU------------- \n");

    printf("1.Porotta \n");
    printf("2.Biriyani \n");
    printf("3.Fired rice \n");
    printf("4.Mandi \n");

    int c;
    printf("Enter the option number fo your choice: ");
    scanf("%d",c);

    switch(c)
    {
    case 1:
        printf("You have selected Porotta.");
        break;
    case 2:
        printf("You have selected Biriyani.");
        break;
    case 3:
        printf("You have selected Fried rice.");
        break;
    case 4:
        printf("You have selected Mandi.");
        break;
    default:
        printf("Item you have selected is not in the menu.");
    }

    return EXIT_SUCCESS;


}
