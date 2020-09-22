//2020.09.12
#include<iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���� ��С����
//�㷨 ѡ��
//���� char���� int����

//��������ģ��
template<typename T>
void mySwap(T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}

//�����㷨
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
				max = j;//�϶����ֵ���±�
			}
		}
		if(max != i)
		{
			mySwap(arr[max],arr[i]);
		}
	}
}

//��ӡ����ģ��
template<typename T>
void myPrint(T arr[],int len)
{
	cout<<"������������飺";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}

void test01()
{
	//����char����
	char charArr[] = "badcfe";
	int num = sizeof(charArr);
	mySort(charArr,num);
	myPrint(charArr,num);
}

void test02()
{
	//����int����
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
