//2020.09.29
#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v)
{
	for(vector<int>::iterator it=v.begin();it != v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
//vector�����ʹ�С
void test01()
{
	vector<int>v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if(v1.empty())
		cout<<"v1Ϊ��"<<endl;
	else
	{	
		cout<<"v1��Ϊ��"<<endl;
		cout<<"v1������Ϊ��"<< v1.capacity()<<endl;
		cout<<"v1�Ĵ�СΪ��"<< v1.size()<<endl;//�������ڵ��ڴ�С
	}
	v1.resize(15);
	//v1.resize(15,100);//�������ذ汾������ָ��Ĭ�����ֵ������2
	printVector(v1);//�������ָ����ԭ�����ˣ�Ĭ����0����µ�λ��
	v1.resize(5);
	printVector(v1);//�������ָ����ԭ�����ˣ�ɾ��������Ĳ���
}
int main()
{
	test01();
	system("pause");
	return 0;
}