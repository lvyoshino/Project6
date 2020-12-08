//myapp.cpp
#include <cstdlib>
#include <iostream>

using namespace std;

// include user header file
#include "myfunctions.h"

// entry point from OS
int main()
{
	char input[50];
	// prompt user for name
	cout << "Please enter your name ";
	cin >> input;
	// call function defined in myfunctions.cpp
	sayHello(input);
	printFractions();
	sayGoodbye(input);

	return EXIT_SUCCESS;
}
