/* rock, paper, scissors */
/* rock = 0
   paper = 1
   scissors = 2 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int yourchoice;
    printf("0 for Rock\n1 for Paper\n2 for Scissors\n");
    printf("enter your choice : ");
    scanf("%d", &yourchoice);

    if (yourchoice < 0 || yourchoice > 2)
    {
        printf("sorry, this is invalid choice !");
        return 1;
    }

    srand(time(0));
    int computerchoice = rand() % 3; // random number between 0 to 2
    printf("computer choice : %d\n", computerchoice);
    char *option[] = {"rock", "paper", "scissor"};
    printf("your choice = %s\n", option[yourchoice]);
    printf("computer choice = %s\n", option[computerchoice]);

    if (yourchoice == computerchoice)
    {
        printf("sorry,no one is winner :|");
    }
    else if ((yourchoice == 0 && computerchoice == 2) ||
             (yourchoice == 1 && computerchoice == 0) ||
             (yourchoice == 2 && computerchoice == 1))
    {
        printf(":) You Win!\n");
    }
    else
    {
        printf(":) Computer Wins!\n");
    }
    printf("Developed by : Preeti Khatri");
    return 0;
};
