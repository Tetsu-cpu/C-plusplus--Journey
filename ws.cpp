#include<iostream>

void HappyBirthday(std::string name){
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "Happy Birthday, " << name << "!" << std::endl;
}
int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    HappyBirthday(name);
    return 0;
}