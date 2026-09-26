#include <iostream>
#include <ctime>

int main(){

int num;
int guess;
int tries;

std::cout<<"**********WELCOME TO THE NUMBER GUESSING GAME**********\n";

srand(time(0));
num=rand()%100;

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
    
    else if(guess=num){
        std::cout<<"CORRECT"<<std::endl;
    }
    else{
        std::cout<<"Please enter a number!"<<std::endl;
    }


}while(guess != num);


    return 0;
}