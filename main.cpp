#include <string.h>
#include <iostream>
#include <string>

using namespace std;
struct Tabel {
	char nama[26];
}tabel[10];


void printSpace(int value) {
	for (int i = 0; i < value; i++) {
		cout << " ";
	}
}
int main() {
	int counter = 0;
	int widthFixed = 30; // Value lebar fixed
	int widthStatic = 0; // value lebar yang udah di kurangin sama string input
	char input[26];

	do {
		cout << "+-------------------------------+\n";
		cout << "| List Name                     |\n";
		cout << "+-------------------------------+\n";
		for (int i = 0; i < counter; i++) {
			widthStatic = widthFixed - strlen(tabel[i].nama); // value lebar fixed dikurangin jumlah string = lebar static
			cout << "| " << tabel[i].nama; printSpace(widthStatic); cout << "|\n";
			
		}
		cout << "+-------------------------------+\n\n";
		do {
			cout << "Type exit to leave this program!\n";
			cout << "Input name: ";
			cin.getline(input, 25);
		} while (strlen(input) > 25);
		strcpy(tabel[counter].nama, input);
		counter++;
		cout << "Press enter to continue";
		getchar();
	} while (strcmp(input, "exit"));
	return 0;
}