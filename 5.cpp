#include <iostream>

using namespace std;

int main() {
	while(true){
		char word[50] = {0};
		for(int i = 0; i < 50; i++){
			
		}
		cout << "請輸入字串 : ";
		cin >> word;
		for(int i = 0; i < 50; i++){
			if(i % 2 == 0){
				if(word[i] <= 'z' && word[i] >= 'a'){
					word[i] = word[i] - 32 ;
				}else{
					continue;
				}
			}else{
				if(word[i] <= 'Z' && word[i] >= 'A'){
					word[i] = word[i] + 32 ;
				}else{
					continue;
				}
			}	
		}	
		for(int i = 0; i < 50; i++){
			cout << word[i];	
		}
		cout << endl << endl;
	}
  	return 0;
}
