#include <iostream>
#include <ctime>

int main(){

int num;
int guess;
int tries=0;
int limit=10;
bool outOfTries=false;

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
    if(tries >= limit){
        outOfTries=true;
        std::cout<<"YOU LOSE! The number was: "<<num<<std::endl;
    }
 }while(guess != num && !outOfTries);

 


    return 0;
}