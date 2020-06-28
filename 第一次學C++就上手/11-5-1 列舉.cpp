#include<iostream>
using namespace std;

enum seasons{
	spring,
	summer,
	fall,
	winter
} S;
int main()
{
	S = spring;
	switch (S){
		case spring:
			cout << "It is spring.\n";
			break;
			
	}
	return 0;
}
