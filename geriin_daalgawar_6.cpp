#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;	
    cout << " Celsius -eer tempraturiin toogoo oruulna uu : ";
    cin >> cel;
    frh = (cel * 9.0) / 5.0 + 32;
    cout << " temperature Celsius-eer   : " << cel << endl;
    cout << " temperature Fahrenheit-eer  : " << frh << endl;
	cout << endl;
    return 0;
}
