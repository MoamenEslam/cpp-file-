#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream file;
	file.open("test.txt");
	file << "this is the first line ";
	file.close();
	string line;
	ifstream my_file("test.txt");
	if (my_file.is_open()) {
		while (getline(my_file, line))
		{
			cout << line << endl;
		}
		my_file.close();
	}
	else {
		cout << "unable to open" << endl;
	}
	return 0;
}