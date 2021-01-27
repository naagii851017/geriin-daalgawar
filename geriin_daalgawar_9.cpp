#include<iostream>

using namespace std;


int main(){
	int number;
	/*cout<<"Ta too oruulnuu: ";
	cin>>number;
	cout<<"Tanii oruulsan too: "<<number;
	*/
	
	int a,b,c;
	cout<<"ta gurvaljnii 3 taliig oruulnuu: ";
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"Tanii oruulsan gurvaljnii perimetre: "<<a+b+c<<endl;
	
	cout<<"3 dahi untsugiin urt: ";
	if(a>b){
		if(a>c){
			cout<<a;
		}else{
			cout<<c;
		}
	}else{
		if(b>c){
			cout<<b;
		}else{
			cout<<c;
		}
	}
	
	
	return 0;
}
