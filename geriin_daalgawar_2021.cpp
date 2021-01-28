#include<iostream>

using namespace std;

int main(){
	int year;
	int month = 0;
	bool rain = false;
	cin >> year;
    cout << year <<"on"<< endl;
	
	while(month<12){
		month++;
		
		if(month == 1){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if((month == 2) && (year % 4 == 0)){
			cout<<month<<" sar 29 honogtoi"<<endl;
			continue;
			}else if((month == 2) && (year % 4 != 0)){
			cout<<month<<" sar 28 honogtoi"<<endl;
			continue;
			}else if(month == 3){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if(month == 4){
			cout<<month<<" sar 30 honogtoi"<<endl;
			}else if(month == 5){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if(month == 6){
			cout<<month<<" sar 30 honogtoi"<<endl;
			}else if(month == 7){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if(month == 8){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if(month == 9){
			cout<<month<<" sar 30 honogtoi"<<endl;
			}else if(month == 10){
			cout<<month<<" sar 31 honogtoi"<<endl;
			}else if(month == 11){
			cout<<month<<" sar 30 honogtoi"<<endl;
			}else if(month == 12){
			cout<<month<<" sar 31 honogtoi"<<endl;
			break;
		}
	}
	
	
	return 0;
}

