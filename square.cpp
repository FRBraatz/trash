#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
	ofstream square("square.txt");

		square << "this better work" << endl;
	square << setw(11) << setfill('*') << "" << endl;
	for (int counter = 0; counter < 11; ++counter) {
		square << left << setw(10) << setfill(' ') << "*" << "*" << endl;
	}
	square << setw(11) << setfill('*') << "" << endl;

	square.close();

	return 0;
}
