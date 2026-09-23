#include <iostream>
#include <ctime>

int main() {

srand(time(NULL));

int num1 = (rand() % 6) + 1;
int num2 = (rand() % 6) + 1;
int num3 = (rand() % 6) + 1;
 std::cout<<"Dice roll: "<< num1 << std::endl;
 std::cout<<"Dice roll: "<< num2 << std::endl;
 std::cout<<"Dice roll: "<< num3 << std::endl;

if(num1 == num2 && num2 == num3) {
    std::cout<<"JACKPOT"<< std::endl;
}
else if(num1 == num2 || num1 == num3 || num2 == num3) {
    std::cout<<"You rolled 2 matching dice!"<< std::endl;
}
else {
    std::cout<<"No matches,better luck next time :( "<< std::endl;
}


    return 0;
}
