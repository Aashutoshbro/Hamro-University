#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k;
	int v,rows;
	cout<<"Enter the number of rows::";
	cin>>rows;
	for(i=0; i<rows; i++)
	{	int v=1;  
		for(j=1; j<(rows-i); j++)
		cout<<"  ";
		for(k=0; k<=i; k++)
		{
			cout<<"   "<<v;
			v=v*(i-k)/(k+1);
		}
	cout<<endl<<endl;
	}
	cout<<endl;
	getch();
	return 0; 
}
