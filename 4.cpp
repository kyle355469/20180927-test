#include <iostream>

using namespace std;

int main() {
	int num;
	int right;
	int left;
	int turn[4];
	cout << "�H�U������ 1000 �� 2000 ��Ƥ�����h��Ӫ��Ʀr�A���G�� 909 ���Ʀr : " << endl;
	for(int i = 1000; i <= 2000; i ++){
		right = i;
		for(int x = 0; x < 4; x++){
			turn[x] = right % 10;
			right = right / 10; 
		} 
		right = i;
		left = turn[0] * 1000 + turn[1] * 100 + turn[2] * 10 + turn[3];
		if(left - right == 909){
			cout << right << endl;
		}
	}
  	return 0;
}
