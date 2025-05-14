/************ Random guesses number game **************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess_no, attempt_no=0;

    printf("Welcome to my random guesses number world 🙏 !\n");
    printf("Guess any random number between 1 to 100 : \n");

    srand(time(0));
    random = rand() % 100 + 1;

    do{
        printf("Enter your guess random number between 1 to 100 : \n");
        scanf("%d",&guess_no);
        attempt_no++;

        if(guess_no < random){
            printf("Guess a larger number!\n\n");
        }
        else if(guess_no > random){
            printf("Guess a smaller number!\n\n");
        }
        else{
            printf("Congratulation :) ! You have successfully guessed the number in %d attempt!\n",attempt_no);
        }
    }while(guess_no != random);

    printf("Thanks , for playing!!!!!\n");
    printf("Developed by : Preeti Khatri\n");

};