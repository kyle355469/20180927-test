#include <iostream>

using namespace std;
int main() {
	while(true){	
		int year = 0;
		int ac = 0;
		cout << "請輸入民國幾年 : ";
		cin >> year;
		ac = year + 1911;
	  	if(ac % 4 == 0){
	    	if(ac % 100 == 0){
		      	if(ac % 400 == 0){
	    	    	cout << "是閏年" << endl;
	   	   		}else{
	    	    	cout << "不是閏年" << endl;
	   	   		}
	   	 	}else{
	   	 		cout << "是閏年" << endl;
			}
	 	}else{
	    cout << "不是閏年" << endl;
	  	}
	}
  	return 0;
}
