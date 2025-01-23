#include <iostream>
#include <string>
#include "myclass.hpp"
#include <cmath>

using namespace std; //avoid boring std::whatever method
float d;
float H2O;
float f;
int main() {
    
    //initialize pizza object calling constructor;
    Pizza pizza(4, 75);
    
    d = pizza.doughAmount();
    cout << d << "kg of total dough!" << endl;

    H2O = pizza.waterAmount();
    cout << round(H2O*1000)/1000 << "kg of water in " << d << "kg total dough!" << endl;

    f = pizza.flourAmount();
    cout << round(f*1000)/1000 << "kg of flour in " << d << "kg total dough!" << endl;
    

    return 0;
};
