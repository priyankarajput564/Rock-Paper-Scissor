#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int compare(char you,char comp){
    if(you==comp){
        return 0;
    }
    else if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }
    else{
        printf("Wrong choice!");
    }

}

int main(){
    int num,result;
    char you,comp;
    srand(time(0));
    num=rand()%100 + 1;//Generates random number between 1 and 100
    if(num<33){
        comp='r';
    }
    else if(num>33 && num<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Enter your choice 'r' for rock,'p' for paper and 's' for scissor: ");
    scanf("%c",&you);
    result=compare(you,comp);
    printf("\nThe result is:");
    if(result==0){
        printf("\nGame draw!");
    }
    else if(result==1){
        printf("\nYou win the game!");
    }
    else if(result==-1){
        printf("\nYou lose the game!");
    }
    else{
        printf("\nWrong choice!");
    }
    printf("\nYou choose %c and computer choose %c.",you,comp);
    

    return 0;
}