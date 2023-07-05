#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Please input a valid character (Alphabet): ";
	cin>>ch;
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		if(ch>='A' && ch<='Z')
			ch=ch+32;
		else if(ch>='a' && ch<='z')
			ch=ch-32;
		else
		cout<<"converted character is: "<<ch<<endl;
    }
	else
	{
		cout<<"Entered character is not a valid alphabet!!!"<<endl;
	}
	
	return 0;
}
