#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "輸入數字 : " ; 
	cin >> num;
	int arr[sizeof(num)];
	/*for(int i = sizeof(num); i > 0; i++){
		arr[i] = num % 10;
		num = num /10;
	} */
	int next;
	int after[20];
	for(int i = 0; i < 20; i++){
		after[i] = 0;
	}
	//cout << num << endl;
	cout << "輸入欲轉換進位 : "; 
	cin >> next;
	int first = 0;
	if(next < 10 && next > 1){
		for(int i = 0; i < 20; i++){
			after[i] = num % next;
			num = num / next;
			if(num == 0){
				first = i;
				break;
			}			
		}
		/*for(int i = 0; i < 20; i++){
			cout << after[i];
		}*/
		
		cout << "轉換結果 : ";
		for(int i = first; i >= 0; i--){
			cout << after[i];
		}
		
	}else{
		cout << "error : 轉換進位不介於 1 到 10 之間" << endl;
	}
  	return 0;
}
