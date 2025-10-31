#include <iostream>

void days_in_month(int month){
    int days;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        days = 30;
    } else days = 28;
    std::cout << days;
}
    


int main(){
    int month;
    std::cin >> month;
    if (month > 0 && month < 13){
        days_in_month(month);
    } else return 0;
    
}