#include <stdio.h>
#include <stdlib.h>

/*int main() {
    int i, limit;

    printf("Number of values to be entered: ");
    scanf("%d",&limit);

    int a[limit];

    for(i = 0; i<limit; i++){
        printf("Enter a value: ");
        scanf("%d",&a[i]);
    }
=
    printf("The numbers you entered are: ");

    for(int j = 0; j < limit; j++) {
        printf("%d ", a[j]);
        if (j == limit - 1) break;
        printf(", ");
    }

    return 0;
}*/

/*int main() {
    int i, limit, sum;

    sum = 0;

    printf("Number of values to be entered: ");
    scanf("%d",&limit);

    int a[limit];

    for(i = 0; i<limit; i++){
        printf("Enter a value: ");
        scanf("%d",&a[i]);
    }

    for(i = 0; i<limit; i++){
        sum = sum + a[i];
    }

    printf("The numbers you entered are: ");

    for(i = 0; i < limit; i++) {
        printf("%d ", a[i]);
        if (i == limit - 1) break;
        printf(", ");
    }

    printf("\n Sum = %d",sum);

    return 0;
}*/

/*int main() {
    int i, limit, searchKey, flag = 0;

    printf("Number of values to be entered: ");
    scanf("%d",&limit);

    int a[limit];

    for(i = 0; i<limit; i++){
        printf("Enter a value: ");
        scanf("%d",&a[i]);
    }

    printf("\n Enter the number to be searched: ");
    scanf("%d",&searchKey);

    for(i = 0; i<limit; i++)
    {
        if(searchKey == a[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\n The number is found at position %d",i+1);
    }
    else
    {
        printf("The number is not found!");
    }

    return 0;
}*/

int main()
{
    int i, limit, j, temp;

    printf("Number of values to be entered: ");
    scanf("%d",&limit);

    int a[limit];

    for(i = 0; i<limit; i++){
        printf("Enter a value: ");
        scanf("%d",&a[i]);
    }

    printf("\n The numbers you entered are: ");

    for(i = 0; i < limit; i++) {
        printf("%d ", a[i]);
        if (i == limit - 1) break;
        printf(", ");
    }

    for(i = 0; i<limit-1; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n The new sorted list : ");

    for(i = 0; i < limit; i++) {
        printf("%d ", a[i]);
        if (i == limit - 1) break;
        printf(", ");
    }


    return 0;
}


