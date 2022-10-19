#include<iostream>
#include<conio.h>
void arr_bubble(int []);
using namespace std;
int main()
{
	int arr[10],i;
	cout<<"Enter elements of the array: ";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before sorting: ";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	arr_bubble(arr);
	cout<<"\nAfter sorting : ";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
void arr_bubble(int arr[])
{
	for(int i=1;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];;
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
