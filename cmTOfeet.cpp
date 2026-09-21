<<<<<<< HEAD
#include <iostream>
#include <cmath>

int main(){
   
double height;
char unit;

std::cout<<"********HEIGHT CONVERSION********"<<std::endl;
std::cout<<"F=FEET"<<std::endl;
std::cout<<"C=CENTIMETERS"<<std::endl;
std::cout<<"What unit would you like to convert to: ";
std::cin>>unit;

if(unit == 'F'){
    std::cout<<"Enter in Centimeters: ";
    std::cin>>height;
    height= height/30.48;
    std::cout<<"Height is: "<<height<<" Feet\n";
   }
   else if(unit =='C'){
    std::cout<<"Enter in Feet: ";
    std::cin>>height;
    height= height*30.48;
    std::cout<<"Height is: "<<height<<" Centimeters\n";
   }
   else{
std::cout<<"Only Feet and Centimeters"<<'\n'; }
return 0;
=======
#include <iostream>
#include <cmath>

int main(){
   
double height;
char unit;

std::cout<<"********HEIGHT CONVERSION********"<<std::endl;
std::cout<<"F=FEET"<<std::endl;
std::cout<<"C=CENTIMETERS"<<std::endl;
std::cout<<"What unit would you like to convert to: ";
std::cin>>unit;

if(unit == 'F'){
    std::cout<<"Enter in Centimeters: ";
    std::cin>>height;
    height= height/30.48;
    std::cout<<"Height is: "<<height<<" Feet\n";
   }
   else if(unit =='C'){
    std::cout<<"Enter in Feet: ";
    std::cin>>height;
    height= height*30.48;
    std::cout<<"Height is: "<<height<<" Centimeters\n";
   }
   else{
std::cout<<"Only Feet and Centimeters"<<'\n'; }
return 0;
>>>>>>> 41291e37d004ee7623977c7b886fabd6b49942de
}