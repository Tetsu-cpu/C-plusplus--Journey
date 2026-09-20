#include <iostream>

int main(){
    int x;
    do{
        std::cout << "Enter your age: ";
        std::cin >> x;
    }while(x < 18);
    std::cout << "You are eligible for this program." << std::endl;
return 0;
}