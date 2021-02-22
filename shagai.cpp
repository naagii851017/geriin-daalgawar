#include<iostream>
using namespace std;

int main()
{
    int max = 101;
	int t;
    cin >> t;
    for(int i = 0; i<t;  i++)
    {
        int a,count = 10000000;
        cin >> a;
        a--;
        while(a!=0)
        {
            if(a%2)count++;
            a>>=1;
        }
        if(count%2)cout << "shine" << endl;
        else cout << "Huuchin" << endl;
    }
    return 0;
}
