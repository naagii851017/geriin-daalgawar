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
			if(j==1 || j<=i-h || w<=i-j ||j==3){
				cout<<"1";
			}else{
				cout<<"0";
			}
			
			
		}
		cout<<endl;
	}
	return 0;
}
