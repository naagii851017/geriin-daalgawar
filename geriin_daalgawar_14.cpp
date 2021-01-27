#include<iostream>
using namespace std;
float averageMark(float [], int);
float percMark(float [], int);
int main()
{
    int i, n;
    float arr[10], avg, per;
    cout<<"Hicheeliin too: ";
    cin>>n;
    cout<<"\Hicheeliin "<<n<<" dunguudee oruulna uu: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    per = percMark(arr, n);
    cout<<"\nHicheeliin dungiin dundaj = "<<per<<"%";
    cout<<endl;
    return 0;
}
float averageMark(float arr[], int n)
{
    int i;
    float sum=0;
    for(i=0; i<n; i++)
        sum = sum+arr[i];
    return (sum/n);
}
float percMark(float arr[], int n)
{
    float perc;
    perc = averageMark(arr, n);
    return perc;
}
