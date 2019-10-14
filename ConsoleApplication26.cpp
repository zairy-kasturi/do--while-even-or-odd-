

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	//declare 
	int a;
	char choose;

	do
	{
		//requets input from user
		cout << "Plz enter number :" << endl;
		cin >> a;


		//process: system will know what kind of number user press
		if (a % 2 == 0)
			cout << a << " Is even number " << endl;
		else if (a % 2 != 0)
			cout << a << " Is odd number " << endl;
	

		//ask user wanna looping again or not ? 
		cout << "do you want  looping again ?? :" << endl;
		cout << "The answer should be Y/y or N/n only " << endl;
		cin >> choose;
		

	} while (choose == 'y'|| choose == 'Y');

	//greeting for user friendly
	cout << "Thanks you " << endl;
	cout << "Have a nice day " << endl;
}

