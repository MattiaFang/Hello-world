//2020.09.26
//STL��õ�����ΪVector���������Ϊ���顣
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vector�������������������
void myPrint(int var)
{
	cout<<var<<endl;
}

void test01()
{
	//����һ��vector����������
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	//vector<int>::iterator  �õ�vector<int>���������ĵ���������
	//vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd   = v.end();   //���������� ָ�����������һ��Ԫ�ص���һ��λ��
	

	////��һ�ֱ�����ʽ
	//while(itBegin != itEnd)
	//{
	//	cout<< *itBegin <<endl;
	//	itBegin++;
	//}

	////�ڶ��ֱ�����ʽ
	//for(vector<int>::iterator it =v.begin();it != v.end();it++)
	//{
	//	cout<<*it<<endl;
	//}

	//�����ֱ�����ʽ ����STL�ṩ�����㷨  ͷ�ļ�algorithm
	for_each(v.begin(),v.end(),myPrint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}