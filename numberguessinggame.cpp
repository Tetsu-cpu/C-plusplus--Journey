#include <iostream>
#include <ctime>

int main(){

int num;
int guess;
int tries=0;

std::cout<<"**********WELCOME TO THE NUMBER GUESSING GAME**********\n";

srand(time(NULL));
num=(rand() % 100)+0;

do{
    std::cout<<"Enter your guess between (0-100): ";
    std::cin>>guess;
    tries++;

    if(guess<num){
        std::cout<<"TOO LOW!"<<std::endl;
    }

    else if(guess>num){
        std::cout<<"TOO HIGH!"<<std::endl;
    }
    
    else{
        std::cout<<"CORRECT! #TRIES:"<<tries<<std::endl;
    }
 }while(guess != num);


    return 0;
}