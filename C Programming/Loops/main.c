#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a;
    int i;
    int result;

    result = 0;

    printf("Enter the number up to which you need to add all its previous numbers: ");
    scanf("%d",&a);*/

    /*for(i=0;i<=a;i=i+(i+1)){                         <--"Doubt"
        result = i;
    } */

    /*for (i=1;i<=a;i++){
        result = result+i;
    }*/

    /*printf("%d",result);
    return 0;
}*/

/*int main()
{
    int a,even,i;

    printf("Enter the maximum limit: ");
    scanf("%d",&a);

    for(i=0;i<=a;i+=2){
        printf("%d \n",i);
    }
}*/

/*int main()
{
    int a,even,i;

    printf("Enter the maximum limit: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        if(i%2 == 0){
            printf("%d \n",i);
        }
    }
}*/

/*int main()
{
    int a,i;

    printf("Enter a number: ");
    scanf("%d",&a);

    for(i=2;i<=a/2;i++){
        if(a%i==0){
            printf("It is not a prime number.");
            break;
        }
        else{
            printf("It is a prime number.");
            break;
        }
    }
}*/

/*int main()
{
    int a,i,j;


    printf("Enter the number of rows: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=0;j<i;j++){
            printf("* ");

        }
        printf("\n");
    }
}*/

int main()
{
    int a,i,j;


    printf("Enter the number of rows: ");
    scanf("%d",&a);

    for(i=a;i>0;i--){
        for(j=i;j>0;j--){
            printf("* ");

        }
        printf("\n");
    }
}
