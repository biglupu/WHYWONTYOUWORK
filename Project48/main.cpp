#include <iostream>
#include "commandCenter.h"
#include <string>

using namespace std;

//Comment here to see what happens

int main(int argc, char** argv) {

	if (argc > 4)
	{
		cout << "\nToo many arguments, seizing operations";
		return 0;
	}


	else if (argc == 2)
	{
		doingStuff(argc, argv[1]); //here we choose which "doingStuff" is being ran. Function overloading

	}



	else if (argc == 3)
	{
		doingStuff(argc, argv[1], argv[2]); //here we choose which "doingStuff" is being ran. Function overloading

	}


	else if (argc == 4)
	{
		doingStuff(argc, argv[1], argv[2], argv[3]); //here we choose which "doingStuff" is being ran. Function overloading, maybe used, maybe not.

	}
	else
		cout << "No arguments, going back to sleep";

	return 0;
}



