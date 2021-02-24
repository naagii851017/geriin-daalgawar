#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int t;
    int h;
    int a1;
    h=5;
    cin >> t;
    for(int i = 0; i<t && t<=100; i++){
        int a, count = 0; 
		bool nuhtsul = 0<a<=1000000;
        cin >> a;
        a--;
        double shagai;
        shagai = a / h;
        a1=ceil(shagai);
        while(a1!=0)
        {
            if(a1%2==0) count++;
            a1>>=1;
        }
        if(count%2==0)cout << "Huuchin" << endl;
        else cout << "Shine" << endl;
    }
    return 0;
}
