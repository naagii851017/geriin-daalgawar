#include<iostream>
using namespace std;

int main()
{

	int udur, jil, doloo_honog;

	cout << "odoroo oruulna uu:";   // Read total number of days from user
	cin >> udur;
    
	jil = (udur / 365);
	doloo_honog = (udur % 365) / 7;
	udur  = udur - ((jil * 365) + (doloo_honog * 7));

	cout << "Jil : " << jil <<endl;
	cout << "Doloo honog : " << doloo_honog <<endl; 
	cout << "Udur : " << udur <<endl;
    
	return 0;
}
