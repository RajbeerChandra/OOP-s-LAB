#include <iostream>  
#include <string.h>  
using namespace std;

int main()  
{  
    char string[100] ;  
    cout<<"Enter a string:";
    gets(string);
    int i, j, length = strlen(string);  
    int freq[length];  
      
    for(i = 0; i < strlen(string); i++) {  
        freq[i] = 1;  
        for(j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j]) {  
                freq[i]++;  
                    
                string[j] = '0';  
            }  
        }  
    }  
      
    
    cout<<"Characters and their corresponding frequencies:"<<endl;  
    for(i = 0; i < length; i++) {  
        if(string[i] != ' ' && string[i] != '0')  
            cout<<string[i]<<"-"<<freq[i]<<endl;  
    }  
          
    return 0;  
}  

