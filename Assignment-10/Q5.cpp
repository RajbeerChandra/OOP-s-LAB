//a
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char text[30], ch;
   int tot=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>text;
   fp.open(text, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
      tot++;
   fp.close();
   cout<<endl<<"Total Characters = "<<tot;
   cout<<endl;
   return 0;
}

//b
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char text[30], ch, str[1000];
   int tot=0, i=0, tot_word=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>text;
   fp.open(text, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]=='\n')
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            tot_word++;
         i++;
      }
      else if(str[i]!=' ')
         i++;
      else
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            tot_word++;
         i++;
      }
   }
   cout<<endl<<"Total Words = "<<tot_word;
   cout<<endl;
   return 0;
}

//c
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char text[30], ch, str[1000];
   int tot=0, i=0, tot_lines=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>text;
   fp.open(text, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]=='\n')
         tot_lines++;
      i++;
   }
   tot_lines++;
   cout<<endl<<"Total Number of Lines = "<<tot_lines;
   cout<<endl;
   return 0;
}
//d
#include<iostream>
using namespace std;

// Function to count uppercase, lowercase,
// special characters and numbers
void Count(string str)
{
	int upper = 0, lower = 0, number = 0, special = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
		else if (str[i]>= '0' && str[i]<= '9')
			number++;
		else
			special++;
	}
	cout << "Upper case letters: " << upper << endl;
	cout << "Lower case letters : " << lower << endl;
	cout << "Number : " << number << endl;
	cout << "Special characters : " << special << endl;
}

// Driver function
int main()
{
	string str = "#GeeKs01fOr@gEEks07";
	Count(str);
	return 0;
}
