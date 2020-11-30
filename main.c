/*
======================================================================
Name        : Console Unit converter
Author      : Deepak M S (GitHub:Deepak-coder80)
CopyRight   : ISC-standard License
version     : 1.0.0
Description : Simply silly unit converter by c in console
======================================================================
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float value,result;
    printf("                        ***********************************************\n");
    printf("                            HAI WELCOME TO THE UNIT CONVERTER\n ");
    printf("                        ***********************************************\n");
    printf("\n");
    printf("Select your options form given below:\n");
    printf(" 1.For convert kg to g     3.For convert cm to m     5.For convert m/s to km/h\n 2.For convert g to kg     4.For convert m to cm     6.For convert km/h to m/s\n " );
    printf("Enter your choice here:");
    scanf("%d",&choice);
    if(choice==0){
         printf("Invalid Entry, please check again!!!!");
    }else if(choice<=6){
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
        case 3:
            result = value / 100;
            printf("%f m",result);
            break;
        case 4:
            result = value * 100;
            printf("%f cm",result);
            break;
        case 5:
            result = value *3.6;
            printf("%f km/h",result);
            break;
        case 6:
            result = value / 3.6;
            printf("%f m/s",result);
            break;

        };

    }else{
        printf("Invalid Entry, please check again!!!!");

    };

    return 0;
}
