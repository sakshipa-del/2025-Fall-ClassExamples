
// Date: 10/4/2025
// Author: K. Sung
// Purpose:
// This program prompts the user to enter a float number, calls func() with that number, and prints the result.
// To demonstrate that different programs can be linked to the same .o file
// to reuse the same function without redundant compilation.


#include "f.h"  // Include the header file that contains the prototype of func

int main()
{
	float f = 0;
    cout << "This is cd prog2!" << endl;
    cout << "Please enter any float number: ";
    cin >> f;
    cout << "This is from prog2 with func(" << f << ")=" << func(f) << endl;

    return 0;
}