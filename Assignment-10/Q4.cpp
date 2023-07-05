#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("text.txt");

    // Get the length of the file
    in.seekg(0, in.end);
    int len = in.tellg();

    // Start reading the file in reverse
    char c;
    while (len--) 
    {
        in.seekg(len, in.beg);
        in >> c;
        cout << c;

    }
}