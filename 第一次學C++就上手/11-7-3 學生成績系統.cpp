#include<iostream>
#include<string> 
using namespace std;

typedef struct grade{
	int co_num;
	int g[3];
	double avg;
} G;

struct student{
	string name;
	G grade;	
} S;

int main()
{
	int sum=0;
	
	cout << "�m�W: ";
	cin >> 	S.name;
	cout << "�X�Ӭ��: ";
	cin >> S.grade.co_num;
	
	for (int i=0 ; i<S.grade.co_num ; i++){
		cout << "�� " << i+1 << " �Ӭ�ؤ���: ";
		cin >> S.grade.g[i];
		sum += S.grade.g[i]; 
	}
	
	cout << S.name << "���������Z: " << (double)sum/S.grade.co_num;
	
	
	return 0;		
}
	
