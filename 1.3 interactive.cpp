// 1.3 interactive.cpp : This file 
//

#include <iostream>

using namespace std;

int main()
{


    cout << "How many cookies would you like to make?\n";

    double number_of_sugar = (0, 0);

    double number_of_flour = (0, 0);

    double number_of_butter = (0, 0);

    int number_of_cookies = 0;




    cin >> number_of_cookies;

    cout << "You entered " << number_of_cookies << " cookies \n ";

    // using the formula to isolate number_of_sugar 
    // 1/48= nunber of (sugar , flour, butter ) / number of cups 
    // formula to use to find number of (SBF) 
    // number_of (SBF)= number of cookies * number of cups 

    number_of_sugar = number_of_cookies * (1.5);

    number_of_flour = number_of_cookies * (2.75);

    number_of_butter = number_of_cookies * (1);


    cout << " You will need " << number_of_sugar << "cups of sugar \n";

    cout << "You will need " << number_of_flour << " cups of flour \n";

    cout << " You will need" << number_of_butter << "cups of butter\n";









    return 0;

}