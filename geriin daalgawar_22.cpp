#include<iostream>

using namespace std;

int main(){
	string arr[1000][3] = {{"user1","password1","ner1"},{"user2","password2","ner2"},};
	cout<<"Nevtreh_ner"<<"\tPassword"<<"\tHereglegchiin_ner"<<endl;
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
	
	cout<<"nevtreh_ner: ";
	getline(cin,name);
	cout<<"Password: ";
	cin>>number;
	cin.ignore();
	cout<<"Hereglegchiin_ner: ";
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
	cout<<"heddehi user-iig ustgamaar baina :";
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




