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
	string newline;
	int len = line.size();
	string tempstr;
	int tempint;
	

	while (!line.empty())
	{
		tempint = line.rfind(" ");
		if (tempint > 0) 
		{
			tempstr.assign(line, tempint, len);
			line.erase(tempint);
			tempstr[1] = toupper(tempstr[1]);
			newline += tempstr;
			/*cout << tempstr << endl; 
			cout << line << endl;
			cout << newline << endl;*/
		}
		else {
			tempstr[0] = toupper(line[0]);
			newline += " ";
			newline += line;
			/*cout << line << endl;
			cout << newline << endl;*/
			break;
		}
	}

	newline.erase(0, 1);

	cout << newline << '\n';

	out << newline;

	in.close();
	out.close();
	return 0;
}
