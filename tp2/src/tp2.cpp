//============================================================================
// Name        : tp2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Client.h"
using namespace std;
using namespace util;

int main() {

	Client nicola(5000, "Joe", "Blo", "418 656-2131");
	cout << nicola.reqClientFormate() << endl;

	return 0;
}
