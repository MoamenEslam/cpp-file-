#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream file;
	file.open("output.txt");
	for (int i = 0; i < 100; i++) {
		file << "I love Barcelona\n";
	}
	file.close();
	string line;
	ifstream my_file("output.txt");
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