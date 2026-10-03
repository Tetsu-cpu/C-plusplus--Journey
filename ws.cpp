#include<iostream>

double cube(double length);
std::string FUllname(std::string Fname, std::string Lname);

int main(){
    double length
    std::cout << "Enter the length of the cube: ":
    std::cin>>Length;
    std::cout << "VOLUME OF THE CUBE: "<< cube << "m^3" << std::endl;

    std::string Fname;
    std::cout << "Enter your first name: ";
    std::cin>> Fname;

    std::string Lname;
    std::cout<< "Enter your last name: ";
    std::cin>> Lname;

    std::string Fullname= FUllname(Fname, Lname);

}
std::string FUllname(std::string Fname, std::string Lname){
    std::string Fullname=  Fname + " " + Lname;
    return Fullname;
}
double cube(double length){
    return length * length * length;
}