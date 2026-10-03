#include<iostream>

void Happy Birthday(std::string name){
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
}
int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    Happy Birthday(name);
    return 0;
}