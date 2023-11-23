#include <iostream>

using namespace std;

void reverse(const char* str){
	if(*str=='\0'){
		return;
	}
	reverse(str+1);
	cout<<*str;
}
int main(){
	char string[100];
	cout<<"¿é¤J¤@­Ó¦r¦ê"<<endl; 
	cin.getline(string,100);
	
	reverse(string);
	
	return 0;
} 
