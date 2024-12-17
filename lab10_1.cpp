#include<iostream>
using namespace std;

int main(){
	int count[5] = {}, n=0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << n+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ 
			n++; 
			count[0]++;
		}else if(grade == 'B'){ 
			n++;
			count[1]++;
		}else if(grade == 'C'){
			n++;
			count[2]++;
		}else if(grade == 'D'){
			n++;
			count[3]++;
		}else if(grade == 'F'){
			n++;
			count[4]++;
		}else if(grade == '0') break;
		else{ 
			cout<<"Wrong input. Please input again.\n";
		}
	
	}while(true);
	
	
	cout << "In total " << n << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];

	//	and so on ... for grade = C, D, F	
	
	return 0;
}
