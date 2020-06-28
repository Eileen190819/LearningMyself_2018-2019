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
	
	cout << "姓名: ";
	cin >> 	S.name;
	cout << "幾個科目: ";
	cin >> S.grade.co_num;
	
	for (int i=0 ; i<S.grade.co_num ; i++){
		cout << "第 " << i+1 << " 個科目分數: ";
		cin >> S.grade.g[i];
		sum += S.grade.g[i]; 
	}
	
	cout << S.name << "的平均成績: " << (double)sum/S.grade.co_num;
	
	
	return 0;		
}
	
