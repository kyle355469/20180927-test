#include<iostream>
#include<ctime>
#include<vector>
using namespace std;
int main(){
	while(true){
	
		char card[11];
		int num[12];
		int total;
		cout << "請輸入身分證號碼 : ";
		cin >> card;
		for(int i = 1; i <= 9; i++){
			num[i+1] = card[i]-'0';
		}
		switch(card[0])
	    {
	        case 'A': 
				num[0] = 1; num[1] = 0;
				break;  
	        case 'B': 
				num[0] = 1; num[1] = 1;
				break;   
	        case 'C': 
				num[0] = 1; num[1] = 2;
				break;  
	        case 'D': 
				num[0] = 1; num[1] = 3;
				break; 
	        case 'E': 
				num[0] = 1; num[1] = 4;
				break;  
	        case 'F': 
				num[0] = 1; num[1] = 5;
				break;   
	        case 'G': 
				num[0] = 1; num[1] = 6;
				break;   
	        case 'H': 
				num[0] = 1; num[1] = 7;
				break;  
	        case 'I': 
				num[0] = 1; num[1] = 8;
				break;  
	        case 'J': 
				num[0] = 1; num[1] = 9;
				break;   
	        case 'K': 
				num[0] = 1; num[1] = 0;
				break;   
	        case 'L': 
				num[0] = 2; num[1] = 1;
				break;   
	        case 'M': 
				num[0] = 2; num[1] = 2;
				break;   
	        case 'N': 
				num[0] = 2; num[1] = 3;
				break;   
	        case 'O': 
				num[0] = 3; num[1] = 4;
				break;
	        case 'P': 
				num[0] = 2; num[1] = 5; 
				break;
	        case 'Q': 
				num[0] = 2; num[1] = 6; 
				break;
	        case 'R': 
				num[0] = 2; num[1] = 7; 
				break;
	        case 'S': 
				num[0] = 2; num[1] = 8; 
				break;
	        case 'T': 
				num[0] = 2; num[1] = 9; 
				break;
	        case 'U': 
				num[0] = 3; num[1] = 0; 
				break;
	        case 'V': 
				num[0] = 3; num[1] = 3; 
				break;
	        case 'W': 
				num[0] = 3; num[1] = 2; 
				break;
	        case 'X': 
				num[0] = 3; num[1] = 3; 
				break;
	        case 'Y': 
				num[0] = 3; num[1] = 4; 
				break;
	        case 'Z': 
				num[0] = 3; num[1] = 5; 
				break;
	        
	    }
		total = (num[0] * 1 + num[1] * 9 + num[2] * 8 + num[3] * 7 + num[4] * 6 + num[5] * 5 + num[6] * 4 + num[7] * 3 + num[8] * 2 + num[9] * 1 + num[10] * 1) % 10;
		if(total == 0){	
			if(num[2] != 1 && num[2] != 2){
				cout << "不正確" << endl;
			}else{
				cout << "正確" << endl;
			}
		}else{
			cout<<"不正確" << endl;
		}
	}
	return 0;
}
