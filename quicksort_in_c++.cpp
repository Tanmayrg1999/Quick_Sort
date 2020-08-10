#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int partition(int arr[],int low,int high)
{
	int i=low;
	int j=high;
	int pivot=arr[low];
	while(i<j)
	{
		while(arr[i]<=pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int p=partition(arr,low,high);
		quicksort(arr,low,p);
		quicksort(arr,p+1,high);
	}
}
int main()
{
	int arr[10]={7,6,5,4,3,2,1};
	int l=0;
	int h=6;
	quicksort(arr,l,h);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
}
