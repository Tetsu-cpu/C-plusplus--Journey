#include <iostream>
#include <cmath>

int main()
{
    double x;
    double r;
    double O;

    std::cout<<"Enter the radius: "<<std::endl;
    std::cin>>r;
    std::cout<<"Enter the angle: "<<std::endl;
    std::cin>>O;

    x=(0.5)*r*r*sin(O);
    std::cout<<"The Area of sector is "<<x;
    


return 0;
}
 














