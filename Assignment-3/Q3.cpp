#include <iostream>
#include <string>
using namespace std;
string Capital(string t)
 {
    int i;
    for (i = 0; i < t.length(); i++)
	{
		if (i == 0)
		{
			t[i] = toupper(t[i]);
		}
		else if (t[i - 1] == ' ')
		{
			t[i] = toupper(t[i]);
		}
	}
	return t;
}
int main() 
{
	cout  << Capital("first character in capital");
	return 0;
}
