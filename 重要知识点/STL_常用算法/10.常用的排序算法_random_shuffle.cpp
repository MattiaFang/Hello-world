#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;


void test01()
{
	//���������
	srand((unsigned int)time(NULL));

	vector<int>v;
	for(int i = 1;i<10;i++)
	{
		v.push_back(i);
	}
	//����ϴ���㷨����˳��
	random_shuffle(v.begin(),v.end());

	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}