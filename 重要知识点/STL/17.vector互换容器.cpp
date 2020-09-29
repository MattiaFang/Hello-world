#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v)
{
	for(vector<int> ::iterator  it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

//����ʹ��
void test01()
{
	vector<int>v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	cout<<"v1Ϊ��";
	printVector(v1);
	vector<int>v2;
	for(int i=9;i>-1;i--)
	{
		v2.push_back(i);
	}
	cout<<"v2Ϊ��";
	printVector(v2);

	//����
	cout<<"swap������"<<endl;
	v1.swap(v2);
	cout<<"v1Ϊ��";
	printVector(v1);
	cout<<"v2Ϊ��";
	printVector(v2);
}

//ʵ����; �� ����swap���������ڴ�ռ�
void test02()
{
	vector<int>v3;
	for(int i=0;i<100000;i++)
	{
		v3.push_back(i);
	}
	cout<<"v3������Ϊ��"<<v3.capacity()<<endl;
	cout<<"v3�Ĵ�СΪ��"<<v3.size()<<endl;

	v3.resize(3);
	cout<<"v3��������ָ����С"<<endl;
	cout<<"v3������Ϊ��"<<v3.capacity()<<endl;
	cout<<"v3�Ĵ�СΪ��"<<v3.size()<<endl;
	//���������˷���Դ
	//����swap�����ڴ�
	vector<int> (v3).swap(v3);//vector<int>(v)Ϊ����һ����������
	cout<<"v3���������ڴ��"<<endl;
	cout<<"v3������Ϊ��"<<v3.capacity()<<endl;
	cout<<"v3�Ĵ�СΪ��"<<v3.size()<<endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}