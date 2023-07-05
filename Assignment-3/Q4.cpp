#include <iostream>
using namespace std;
string LongestWord(string s)
 {
  int n=0;
  string str,max;
  for(int i=0;i<s.length();i++)
  {
        if((s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z'))
      {
          if(str.length()>max.length())
            max=str;
            str.clear();
            continue;
      }
        str+=s[i];
  }
  if(max.length() < str.length())
  max=str;
  return max;
}
int main()
{
   cout << LongestWord("I Love my country");
   return 0;
}