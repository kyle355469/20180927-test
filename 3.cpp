#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "��J�Ʀr : " ; 
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
	cout << "��J���ഫ�i�� : "; 
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
		
		cout << "�ഫ���G : ";
		for(int i = first; i >= 0; i--){
			cout << after[i];
		}
		
	}else{
		cout << "error : �ഫ�i�줣���� 1 �� 10 ����" << endl;
	}
  	return 0;
}
