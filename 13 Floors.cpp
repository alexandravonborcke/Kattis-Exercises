#include <iostream>
/* Problem being solved:
https://open.kattis.com/problems/13floors */

void floor_names(int true_floors){
    int new_floors;
    if (true_floors < 13){
        new_floors = true_floors;
    } else new_floors = (true_floors + 1);
    // The corresponding floor number is: 
    std::cout << new_floors;
}

int main(){
    int true_floors;
    // Enter your current floor number: 
    std::cin >> true_floors;
    floor_names(true_floors);
}