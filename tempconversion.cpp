<<<<<<< HEAD
#include <iostream>
#include<cmath>

int main(){

   double temp;
   char unit;

   std::cout<<"********TEMPERATURE CONVERSION********"<<std::endl;
   std::cout<<"F=FAHRENHEIT"<<std::endl;
   std::cout<<"C=CELSIUS"<<std::endl;
   std::cout<<"What unit would you like to convert to: ";
   std::cin>>unit;

   if(unit == 'F'){
    std::cout<<"Enter in Celsius: ";
    std::cin>>temp;
    temp= (temp*1.8)+32.0;
    std::cout<<"Temperature is: "<<temp<<"F\n";
   }
   else if(unit =='C'){
    std::cout<<"Enter in Fahrenheit: ";
    std::cin>>temp;
    temp= (temp-32)/1.8;
    std::cout<<"Temperature is: "<<temp<<"C\n";
   }
   else{
std::cout<<"Only Celcius and Fahrenheit"<<'\n'; }
   
   std::cout<<"**************************************";
    return 0;
=======
#include <iostream>
#include<cmath>

int main(){

   double temp;
   char unit;

   std::cout<<"********TEMPERATURE CONVERSION********"<<std::endl;
   std::cout<<"F=FAHRENHEIT"<<std::endl;
   std::cout<<"C=CELSIUS"<<std::endl;
   std::cout<<"What unit would you like to convert to: ";
   std::cin>>unit;

   if(unit == 'F'){
    std::cout<<"Enter in Celsius: ";
    std::cin>>temp;
    temp= (temp*1.8)+32.0;
    std::cout<<"Temperature is: "<<temp<<"F\n";
   }
   else if(unit =='C'){
    std::cout<<"Enter in Fahrenheit: ";
    std::cin>>temp;
    temp= (temp-32)/1.8;
    std::cout<<"Temperature is: "<<temp<<"C\n";
   }
   else{
std::cout<<"Only Celcius and Fahrenheit"<<'\n'; }
   
   std::cout<<"**************************************";
    return 0;
>>>>>>> 41291e37d004ee7623977c7b886fabd6b49942de
}