#include<bits/stdc++.h>
using namespace std;
void sort(string &str)
{
sort(str.begin(), str.end());
cout << str;
}
int main()
{
	string s = "Computer";
	sort(s);
	return 0;
}
