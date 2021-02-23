#include<iostream>

using namespace std;
void nDorvol(int);
void bDorvol(int);
void bbGurwal(int);
void zbgurwal(int);
void dzgurwal(int);
void nzgurwal(int);

int main(){
	int choice;// 12321
	
	cout<<"Menu";
	cout<<"Ta hevlehiig hussen dursiinhee omnoh dugaariig oruulnuu: ";
	cin>>choice;
	
	int Size;
	cout<<"Ta hemjeestee oruulnuu: ";
	cin>>Size;
	switch(choice){
		case 1:
			bDorvol(Size);
			break;
		case 2:
			nDorvol(Size);
			break;
		case 3:
			bbGurwal(Size);
			break;
		case 4:
			zbgurwal(Size);
			break;
		case 5:
			dzgurwal(Size);
			break;
		case 6:
			nzgurwal(Size);
			break;
		
	}
	
	return 0;
}

void bDorvol(int hemjee){
	for(int i = 0; i<hemjee; i++){
		for(int j = 0; j <hemjee; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void nDorvol(int hemjee){
	for(int i = 1; i<=hemjee; i++){
		for(int j = 1; j<=hemjee; j++){
			if(j==1 || j==i || i==hemjee){
				cout<<"*";
			}else{
				cout<<" ";	
			}
			}
		}
		cout<<endl;
	}
void bbGurwal(int hemjee){
	for(int i = 1; i<=hemjee; i++){
		for(int j = 0; j<=i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void zbgurwal(int hemjee){
	for(int i = 0; i<hemjee ; i++){
		for(int k = i+1; hemjee<k ; k++){
			cout<<" ";
		}
		
		for(int j = 0; j<i+1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void dzgurwal(int hemjee){
	for(int i = 0; i<hemjee ; i++){
		for(int k = i; k<hemjee ; k++){
			cout<<"*";
		}
		
		for(int j = 0; i<j; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
void nzgurwal(int hemjee){
	for(int i = 0; i<hemjee; i++){
		for(int j = 0; j <hemjee; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}


