/************** Calculator *************/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    float first,second;
    int choice;
    char n[15];

    do{
    printf("\n----------------------------------------\n");
    printf("Welcome to simple calculator!\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Power\n7. Exit\n");

    printf("Now, Enter you choice : ");
    scanf("%d",&choice);

    printf("\nPlease enter first number : ");
    scanf("%f",&first);
    printf("now, enter second number : ");
    scanf("%f",&second);

    switch(choice){
        case 1: printf("Result of operation is: %.2f",first+second);
        printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
        break;
        case 2: printf("Result of operation is: %.2f",first-second);
        printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
        break;
        case 3: printf("Result of operation is: %.2f",first*second);
        printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
        break;
        case 4: 
        if(second == 0){
            printf("Invalid argument for division");
        }else{ 
            printf("Result of operation is: %.2f",first/second);}
        printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
        break;
        case 5: 
        if(second == 0){
            printf("Invalid argument for division");
        }else{ 
            printf("Result of operation is: %.2f",fmod(first,second));}
        printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
        break;
        case 6: {
            double result = pow(first, second);  
            printf("Result of operation is: %.2lf\n", result);
            printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
            break;
        }
        case 7:
            printf("Exiting calculator. Goodbye!\n");
            printf("\n\nPlease enter yes or no if you want to recalculate: ");
            scanf("%s",&n);
            break;
        default:
            printf("Invalid choice. Please try again.\n\n");
    }
}while (strcmp(n, "no") != 0);

    printf("Program ended.\n");
    printf("Developed by: Preeti Khatri\n\n");

};