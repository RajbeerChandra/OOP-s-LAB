#include<iostream>
using namespace std;

int main()
{
    char str1[80], str2[80];
    int l, i, j;

    cout<<"Enter first string: ";
    gets(str1);

    cout<<"Enter substring to find: ";
    gets(str2);

   
    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        cout<<"Substring found at position: "<< i - j + 1;
    }
    else
    {
        cout<<"Substring not found";
    }

    return 0;
}