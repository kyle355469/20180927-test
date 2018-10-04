#include <iostream>

using namespace std;

int main() {
	int name[5];
	for(int i = 0; i < 5; i++){	
		cout << "請輸入第" << i + 1 << "個數字 : "; 
		cin >> name[i];
	} 
	int turn;
	for(int l = 0; l < 5; l++){
		for(int i =0; i < 5 ; i++){
			if(name[i] > name[i+1]){
				turn = name[i+1];
				name[i+1] = name[i];
				name[i] = turn;
			}
		}
	}
	for(int i = 0;i < 5; i++){
		cout << name[i] << " ";
	}
  	return 0;
}
