// In the name of God !
//Submultiples of 3 & 5 in three-digits numbers
//v1.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int i;
	for (i = 100; i < 1000; i++)
		if (i%15 == 0)
			cout << i <<endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\