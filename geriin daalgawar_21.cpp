#include<iostream>

using namespace std;

int main(){
	string arr[1000][3] = {{"shar","yellow","jeltii"},{"khar","black","Cherniye"},};
	cout<<"Mongol"<<"\tEnglish"<<"\tOros"<<endl;
	cout<<"-----------------------------------"<<endl<<endl;

	int numOfcontat=0;
	//finding how many contacts do i have.
	while(arr[numOfcontat][0] != "\0"){
		numOfcontat++;
	}

	for(int i = 0; i<numOfcontat;i++){
		for(int j = 0; j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	string name;
	string number;
	string address;
	
	cout<<"Mongol: ";
	getline(cin,name);
	cout<<"English: ";
	cin>>number;
	cin.ignore();
	cout<<"Oros: ";
	getline(cin,address);
	
	
	
	cout<<numOfcontat;
	
	arr[numOfcontat][0] = name;
	arr[numOfcontat][1] = number;
	arr[numOfcontat][2] = address;
	numOfcontat++;
	//----------------------------------------------
	cout<<endl<<"Ner"<<"\tdugaar"<<"\t\thayag"<<endl;
	cout<<"-----------------------------------"<<endl;
	for(int i = 0; i<numOfcontat;i++){
		for(int j = 0; j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//-------------------deleting element from array---------------------
	int numToDelete;
	cout<<"heddehi ugiig ustgamaar baina :";
	cin>>numToDelete;

	for(int i = numToDelete -1; i<numOfcontat;i++){
		for(int j = 0; j<3;j++){
			arr[i][j] = arr[i+1][j];
		}
	}
	numOfcontat--;
	cout<<endl<<"-----------------------------------------"<<endl;
	for(int i = 0; i<numOfcontat;i++){
		for(int j = 0; j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	for(int j = 0; j<3;j++){
		cout<<arr[numOfcontat][j]<<"\t";
	}

	return 0;
}




