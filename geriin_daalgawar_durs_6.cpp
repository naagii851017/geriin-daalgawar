#include<iostream>

using namespace std;

int main(){
	int h,w;
	cout<<"Ondor: ";
	cin>>h;
	cout<<"Orgon: ";
	cin>>w;
	
	
	
	for(int i = 0; i<h; i++){
		for(int j = 0; j<w; j++){
			if(i==1 || j<=i-h || w<=i-j ||i==3){
				cout<<"0";
			}else{
				cout<<"1";
			}
			
			
		}
		cout<<endl;
	}
	return 0;
}
