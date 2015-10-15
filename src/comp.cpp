#include <iostream>
#include <string>
#include "comp.h"

using namespace std;

Comp::Comp()
{
	cout << "Starting Computer" << endl;
}

int main()
{
	Comp cp1 = new Comp();
	return 0;
}
