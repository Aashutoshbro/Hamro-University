#include<iostream>
using namespace std;
inline int sum(int x, int y){
	return x+y;
}
int main(){
	int x= 9;
	int y= 10;
	cout<<"the sum of two number is "<<sum(x,y);
	return 0;
}
