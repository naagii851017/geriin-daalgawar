#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float side1, side2, ang1, area;		
        cout<<" tegsh untsugt gurwaljinii Urt : ";
    	cin>>side1;
        cout<<" tegsh untsugt gurwaljinii Urgun : ";
    	cin>>side2;
        cout<<" tegsh untsugt gurwaljinii Undur : ";
    	cin>>ang1;	
		area = (side1 * side2 * sin((PI/180)*ang1))/2;
        cout<<" tegsh untsugt gurwaljinii Talbai : "<< area << endl;
        cout << endl;
        return 0;
    }
