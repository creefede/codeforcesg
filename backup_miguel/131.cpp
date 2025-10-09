#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
	int i=1;
	string str;
	cin>>str;
	bool mY = false, MY =false;
	for(char c :str){
		if(isupper(c) == false){
			MY=true;
			break;
		}
	}
        while(i<str.size()){
                if(isupper(str[i]) == false){
                        mY=true;
                        break;
                }       
		i++;
        }
	i=0;
	if(MY==false){
		while(i<str.size()){
			str[i]=tolower(str[i]);
			i++;
		}
	}
	else if(mY==false){
			while(i<str.size()){
		if(i==0){
			str[i]=toupper(str[i]);
			i++;
		}else{
			str[i]=tolower(str[i]);
			i++;
		}
	}
	}
 
 
	cout<<str;
}
