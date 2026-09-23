#include<iostream>
#include<ctime>

int main(){
    

  srand(time(0));
  int randNum=(rand()% 5)+1;

 switch(randNum){
    case1:std::cout<<"You have won a free ticket to the concert!"<<std::endl;
          break;
    case2:std::cout<<"Roll again!"<<std::endl;
          break;
    case3:std::cout<<"You have won 10000$! or is it? Send your bank details."<<std::endl;
          break;
    case4:std::cout<<"You WON!...nothing :( "<<std::endl;
          break;
    case5:std::cout<<"You have won 0.1$!WOOHOOO"<<std::endl;
          break;
      }
 
    return 0;
}