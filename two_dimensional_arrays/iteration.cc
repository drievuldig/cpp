#include <iostream>

using namespace std;

int main() {
	string names[2][4] = {
		{"Fred", "Wilma", "Pebbles", "Dino"},
		{"Barney", "Betty", "Bamm-Bamm", "Hoppy"}
	 };
	 
	 cout << "names[1][2] = " << names[1][2] << endl;
	 
	 string tmp;
	 cout << "\nThe elements of names are:\n";
	 for (long int ii=0; ii<100000000; ii++){
		for (int row = 0; row < 2; ++row) {
			for (int col = 0; col < 4; ++col) {
				tmp = names[row][col];
			}
		}
	}
	cout << "done\n";
}