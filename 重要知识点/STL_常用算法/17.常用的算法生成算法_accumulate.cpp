#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;


void test01()
{
	vector<int>v1;
	for(int i = 0;i<=100;i++)
	{
		v1.push_back(i);
	}
	int sum = accumulate(v1.begin(),v1.end(),0); //0Ϊ��ʼ�ۼ�ֵ

	cout<<"����������Ԫ���ܺ�sum = " << sum <<endl;
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}