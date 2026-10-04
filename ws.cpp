#include <iostream>

void bakePizza();
void bakePizaa(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
    bakePizza("pepperoni","Chicken");
    return 0;
}

void bakePizza(){
    std::cout << "Baking a plain pizza" << std::endl;
}
void bakePizza(std::string topping1){
    std::cout << "Baking a pizza with " << topping1 << std::endl;
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Baking a pizza with " << topping1 << " and " << topping2 << std::endl;
}