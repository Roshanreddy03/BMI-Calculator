#include <stdio.h>

int main()
{
    printf("* BMI Calculator *\n");
    char calculate;
    do
    {
        int weight,height;
        int BMI;
        printf("Enter a weight: ");
        scanf("%d", &weight);
        printf("Enter a height: ");
        scanf("%d", &height);

        BMI = weight/(height*height);
        printf("%d\n",BMI);
        
        printf("\nDo you want to calculate again? (y/n):");
        scanf(" %c", &calculate);
    }

    while (calculate == 'y' || calculate == 'Y');
    printf("Thank you.\n");
}