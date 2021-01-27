#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
		cout << "talbai bolon parametriig oloh :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Radiusaa oruulna uu : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" Talbai : "<< area << endl;
        cout<<" Parametr : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }
