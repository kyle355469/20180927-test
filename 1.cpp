#include <iostream>

using namespace std;
int main() {
	while(true){	
		int year = 0;
		int ac = 0;
		cout << "�п�J����X�~ : ";
		cin >> year;
		ac = year + 1911;
	  	if(ac % 4 == 0){
	    	if(ac % 100 == 0){
		      	if(ac % 400 == 0){
	    	    	cout << "�O�|�~" << endl;
	   	   		}else{
	    	    	cout << "���O�|�~" << endl;
	   	   		}
	   	 	}else{
	   	 		cout << "�O�|�~" << endl;
			}
	 	}else{
	    cout << "���O�|�~" << endl;
	  	}
	}
  	return 0;
}
