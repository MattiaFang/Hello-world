#include<iostream>
using namespace std;
void mySort(int *p1,int *p2)
{
	if(*p1 > *p2)
	{
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}

int main()
{
	//1、创建数组
	int arr[]={10,2,9,3,4,5,8,7,6,1};
	//2、冒泡排序数组
	int *p =arr;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++)
	{
		for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++)
		{
			mySort(&arr[i],&arr[j]);
		}
	}
	//3、打印数组
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<*p<<" ";
		*p++;
	}
	cout<<endl;
	system("pause");
	return 0;
}
