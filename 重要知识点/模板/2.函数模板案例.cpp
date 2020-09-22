//2020.09.12
#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从小到大
//算法 选择
//测试 char数组 int数组

//交换函数模板
template<typename T>
void mySwap(T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}

//排序算法
template<typename T>
void mySort(T arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		int max =i;
		for(int j=i+1;j<len;j++)
		{
			if(arr[max]<arr[j])
			{
				max = j;//认定最大值的下标
			}
		}
		if(max != i)
		{
			mySwap(arr[max],arr[i]);
		}
	}
}

//打印数组模板
template<typename T>
void myPrint(T arr[],int len)
{
	cout<<"交换排序后数组：";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr);
	mySort(charArr,num);
	myPrint(charArr,num);
}

void test02()
{
	//测试int数组
	int intArr[]={1,4,2,8,9,5,6,3};
	int num =sizeof(intArr)/sizeof(int);
	mySort(intArr,num);
	myPrint(intArr,num);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
