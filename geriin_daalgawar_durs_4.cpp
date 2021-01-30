#include<iostream>

using namespace std;

int main(){
	int h,w;
	cout<<"Ondor:";
	cin>>h;
	cout<<"Orgon:";
	cin>>w;
	
	for(int i = 1; i<=w ; i++){
		for(int j = 0; j<=i-1; j++){
		cout<<"*";	
		}
		cout<<endl;
	}
	//5 10
	
	
	
	return 0;
}
