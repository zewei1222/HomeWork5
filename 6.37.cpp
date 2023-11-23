#include <iostream>
using namespace std;

void findmax(const int* num,int size){
	int max=num[0];
	for (int i=0;i<size;i++){
		if (num[i]>max) max=num[i];
	}
	cout<<"最大數字為:"<<max;
}

int main(){
	int n;
	cout<<"輸入比較的數量"<<endl;
	cin>>n;
	
	if (n>0){
		int *num=new int[n];	
		cout<<"輸入數字"<<endl;
		for (int i=0;i<n;i++) cin>>num[i];
		
		if (n!=1){
			findmax(num,n);
			
			delete[] num;
		}else{
			cout<<num[0];
		}
	}else{
		cout<<"輸入為0無法比較"<<endl; 
	}
	
	
	
	
	return 0;
} 
