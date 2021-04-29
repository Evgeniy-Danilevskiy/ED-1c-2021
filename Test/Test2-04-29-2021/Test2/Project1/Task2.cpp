#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");

	string line;

	getline(in, line);

	cout << line << '\n';

	in.close();
	out.close();
	return 0;
}
