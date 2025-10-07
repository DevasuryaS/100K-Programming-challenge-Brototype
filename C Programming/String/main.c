#include <stdio.h>

/*int main() {
    char name[20];
    printf("Enter a name");
    scanf("%s",name);

    printf("Entered name is: %s",name);
    return 0;
}*/

//Multidimensional array

int main()
{
    int a[3][3], i, j;

    for(i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("Enter value:");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n The values entered are: \n");

    for(i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}