#include <iostream>
using namespace std;

void findmax(const int* num,int size){
	int max=num[0];
	for (int i=0;i<size;i++){
		if (num[i]>max) max=num[i];
	}
	cout<<"�̤j�Ʀr��:"<<max;
}

int main(){
	int n;
	cout<<"��J������ƶq"<<endl;
	cin>>n;
	
	if (n>0){
		int *num=new int[n];	
		cout<<"��J�Ʀr"<<endl;
		for (int i=0;i<n;i++) cin>>num[i];
		
		if (n!=1){
			findmax(num,n);
			
			delete[] num;
		}else{
			cout<<num[0];
		}
	}else{
		cout<<"��J��0�L�k���"<<endl; 
	}
	
	
	
	
	return 0;
} 
