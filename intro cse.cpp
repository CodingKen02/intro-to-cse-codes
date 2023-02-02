/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
* This program is subtracting, multiplying, and printing strings. I have added
* a theme (like a pizza slice interaction). However, you do not insert numbers, 
* just communicate with the computer for the answers. Student: kfk38 - Kennedy K.
*/

int main()
{
    double pepperoni = 5;
    double cheese = 20;
    double supreme = 30;
    string response;
    string yn;
    
    cout << "Hello World, How are you today?" << endl;
    cin >> response;
    
    cout << "Interesting, let's do some math!" << endl;
    cout << "\n" << "You have 3 different pizzas that have 5, 20, and 30 slices." << endl;
    cout << "Multiply them by the math function, pi, to see how much you would have if you buy more." << endl;
    cout << "Subtract them by pi in a different process to see how much you would have left if you ate some." << endl;
    
    cout << "\n" << "Shall we continue? y/n" << endl;
    cin >> yn;
    
    if (yn == "y") {
        cout << "\n" << "If you buy more pizza..." << endl;
        cout << "Pepperoni: " << pepperoni * M_PI << " slices left." << endl;
        cout << "Cheese: " << cheese * M_PI << " slices left." << endl;
        cout << "Supreme: " << supreme * M_PI << " slices left." << endl;
        cout << "\n" << "If you decide to eat some pizza..." << endl;
        cout << "Pepperoni: " << pepperoni - M_PI << " slices left." << endl;
        cout << "Cheese: " << cheese - M_PI << " slices left." << endl;
        cout << "Supreme: " << supreme - M_PI << " slices left." << endl;
        cout << "\n" << "Looks cool, right? Come back for more anytime! :)" << endl;
    }
    else {
        cout << "Sorry to hear that. Goodbye!" << endl;
    }

    return 0;
}
