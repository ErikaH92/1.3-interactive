// 1.3 interactive.cpp : This file 
//

#include <iostream>
//including namespace std is to ignore from overusage on the program and just inlcude cout cin
using namespace std;
//the function of main and inside includes the code.
int main()
{

    //displays to user how many cookies would you like to make 
    cout << " How many cookies would you like to make? \n ";
    //identified my variables to be double to display the answer in decimal format for sugar, flour and butter. number of cookies is integer.
    double number_of_sugar = (0, 0);

    double number_of_flour = (0, 0);

    double number_of_butter = (0, 0);

    int number_of_cookies = 0;



    //The number user enters will be stored 
    cin >> number_of_cookies;
    //it will display to the user " to make 78 (for example) cookies, you will need number of sugar , flour , butter.
    cout << " To make " << number_of_cookies << " cookies.  \n ";

    // using the formula to isolate number_of_sugar 
    // 1/48= nunber of (sugar , flour, butter ) / number of cups 
    // formula to use to find number of (SBF) 
    // number_of (SBF)= number of cookies * number of cups 

    number_of_sugar = number_of_cookies * (1.5);

    number_of_flour = number_of_cookies * (2.75);

    number_of_butter = number_of_cookies * (1);

    //the display is you will need number of cups of sugar , number of cups of flour, number of cups of butter. 
    cout << "You will need: \n ";
    
    cout << number_of_sugar << " cups of sugar. \n ";

    cout << number_of_flour << " cups of flour. \n ";

    cout << number_of_butter << " cups of butter. \n ";









    return 0;

}