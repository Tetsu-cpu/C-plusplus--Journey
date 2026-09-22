#include <iostream>
int main() {
    for(int i=1; i<=3; i++){
        for(int j=1; j<=20; j+=2){
            std::cout << i << " " << j << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}