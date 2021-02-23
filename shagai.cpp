#include<iostream>
#include <cmath>
using namespace std;


int main()
{
    
    int t;
    int h;
	h=5;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        int a,count = 0;
        cin >> a;
        a--;
        double shagai;
        int a1;
        shagai = a / h;
        a1=ceil(shagai);
        
        while(a1!=0)
        {
            if(a1%2)count++;
            a1>>=1;
        }
        if(count%2)cout << "Shine" << endl;
        else cout << "Huuchin" << endl;
    }
    return 0;
}
