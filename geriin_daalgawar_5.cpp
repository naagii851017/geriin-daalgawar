#include <iostream>
using namespace std;

    int main()
    {
    	float cm, m, km;	
        cout<<" cm oruulna uu : ";
    	cin>>cm;
	
		m = cm/100;
		km = cm/100000;
        cout<<" metreer : "<< m << endl;
        cout<<" klometreer : "<< km << endl;		
		
        cout << endl;
        return 0;
    }
