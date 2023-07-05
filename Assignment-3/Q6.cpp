#include <iostream>
using namespace std;

int main()
{
    string s = "I Love My Country India";
    int c = 0;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            c++;
        }
    }
    c = c + 1;
    cout << "No. of words = " << c << endl;
}