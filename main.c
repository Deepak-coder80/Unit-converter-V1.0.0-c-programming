#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float value,result;
    printf("***************\n");
    printf("HAI WELCOME\n");
    printf("***************\n");
    printf("\n");
    printf("Select your options form given below:\n");
    printf(" 1.for convert kg to g \n 2. for convert g to kg\n" );
    printf("Enter your choice here:");
    scanf("%d",&choice);
    if(choice<=2){
             printf("Enter the value you want to convert:");
        scanf("%f",&value);

        switch(choice){
        case 1:
            result = value * 1000;
            printf("%f grams",result);
            break;
        case 2:
            result = value / 1000;
            printf("%f Kg",result);
            break;

        };

    }else{
        printf("are you a fool??");

    };

    return 0;
}
