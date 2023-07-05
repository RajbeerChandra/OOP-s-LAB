#include<iostream>
using namespace std;

int main(){
	int i=0;
	char str[200];
	cout<<"Enter Your String: ";
	gets(str);
	
    for(i=0; str[i]!='\0'; i++){
		if(str[i]=='a'){
			str[i]='b';
		}
		else if(str[i]=='e'){
			str[i]='f';
		}
		else if(str[i]=='i'){
			str[i]='j';
		}
		else if(str[i]=='o'){
			str[i]='p';
		}
		else if(str[i]=='u'){
			str[i]='v';
		}
		else if(str[i]=='A'){
			str[i]='B';
		}
		else if(str[i]=='E'){
			str[i]='F';
		}
		else if(str[i]=='I'){
			str[i]='J';
		}
		else if(str[i]=='O'){
			str[i]='P';
		}
		else if(str[i]=='U'){
			str[i]='V';
		}
	}
	
	cout<<"New String:"<<str;
	
	return 0;
}