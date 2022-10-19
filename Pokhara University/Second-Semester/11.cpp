#include<iostream>
using namespace std;
class utsav {
	public:
		void display(){
			cout<<"my name is utsav wagle "<<endl;
		}
};
class hunter : public utsav{
	public:
		void display(){
			cout<<"my online name is hunter"<<endl;
		}
};
int main(){
	utsav *utsav;
	hunter gupta;
	utsav= &gupta;
	utsav->display();
	return 0;
	
	
}
