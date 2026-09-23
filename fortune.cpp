#include<iostream>
#include<ctime>

int main(){
  srand(time(0));
  int randNum=(rand()% 5)+1;
  std::cout<<"Rolling your fortune..."<<std::endl;

 switch(randNum){
    case 1:std::cout<<"You have won a free ticket to the concert!"<<std::endl;
          break;
    case 2:std::cout<<"Roll again!"<<std::endl;
          break;
    case 3:std::cout<<"You have won 10000$! or is it? Send your bank details."<<std::endl;
          break;
    case 4:std::cout<<"You WON!...nothing :( "<<std::endl;
          break;
    case 5:std::cout<<"You have won 0.1$!WOOHOOO"<<std::endl;
          break;}
 
 
return 0;
}