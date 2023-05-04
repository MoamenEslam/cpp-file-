#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	int n;
	cout << "Enter Your Number";
	cin >> n;
	ofstream file;
	file.open("Moamen Eslam File 1");
	switch (n) {
	case 1:
		file << "First Line";
		break;
	case 2:
		file << "Second Line";
		break;
	case 3:
		file << "Third Line";
		break;
	}
	file.close();
	string Line;
	ifstream my_file("Moamen Eslam File 1");
	if (my_file.is_open()) {
		while (getline(my_file, Line))
		{
			cout << Line << endl;
		}
		my_file.close();
	}
	else {
		cout << "unable to open";
	}
	return 0;
}
