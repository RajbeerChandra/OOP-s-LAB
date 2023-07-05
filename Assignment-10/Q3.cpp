#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	ofstream of;
	fstream f;

	// opening file using ofstream
	of.open("text.txt", ios::app);
	if (!of)
		cout << "No such file found";
	else {
		of << " String";
		cout << "Data appended successfully\n";
		of.close();
		string word;
	
		// opening file using fstream
		f.open("text.txt");
		while (f >> word) {
			cout << word << " ";
		}
		f.close();
	}
	return 0;
}
