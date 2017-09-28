/*
Connor Castillo - Sept 22, Period 1

MessAround: Just Code Stuff





*/
// Libraries
#include <iostream>
#include <conio.h>

// Namespaces
using namespace std;

// Functions()
void pause() {
		cout << "Press any key to continue . . .";\
		while (!_kbhit());
		_getch();
		cout << "\n";
}

// MAIN
void main() {
	// Display Text 
	cout << "Hey its Me I was just wondering how long the message can go can it be infinite lengths or is it a character limit" << endl;
	pause();
	// no system(""); commands anymore
}