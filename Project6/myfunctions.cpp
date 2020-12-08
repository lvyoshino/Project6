//myfunctions.cpp
#include <iostream>

using namespace std;

/**
* @description:
* sayHello(name)
* prints the greeting "Hello 'name'"
* @param:    const char* name - text containing name to greet
* @return:   void
*/
void sayHello(const char* name)
{
	cout << "Hello name my name is " << name << " -nice to meet you" <<endl;
}

void printFractions()
{
	int i;
	for (i=1;i<=10;i++)
		cout<<"1/"<<i<<'='<<1.0/i<<endl;
}

void sayGoodbye(const char* name)
{
	cout << "Goodbye " << name <<" - it was nice to meet you"<< endl;
}