#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, y, z;
	setlocale(0, "");
    int p =1;
    while (p != 0)
    {
		cout << "1 - Addition\n2 - Subtraction\n3 - Involution\n_________________\n0 - Exit\n";
		cin >> p;
		switch(p)
		{
		case 0: break;
		case 1:
			cout <<"Enter first number:\n";
			cin >> x;
			cout <<"Enter second number:\n";
			cin >> y;
			z = x + y; break;
		case 2:
			cout <<"Enter first number:\n";
			cin >> x;
			cout <<"Enter second number:\n";
			cin >> y;
			z = x - y; break;
		case 3:
			cout <<"Enter first number:\n";
			cin >> x;
			cout <<"Enter second number:\n";
			cin >> y;
			z = pow(x,y); break;
		default:
			cout <<"\nYou did something wrong :ñ\nTry it again!\n\n";
            continue;
        }
		cout <<"Answer: "<< z << endl;
    }
}
