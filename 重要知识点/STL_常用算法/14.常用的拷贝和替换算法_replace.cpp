#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//�滻replace
//�������ڵľ�Ԫ�ػ�����Ԫ��
void test01()
{
	vector<int>v;
	for(int i = 0;i<10;i++)
	{
		v.push_back(i);
	}
	cout<<"�滻ǰ������ " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	replace(v.begin(),v.end(),7,0);//7Ϊ�����ھ�Ԫ�أ�0Ϊ��Ԫ��

	cout<<"�滻�������� " ;
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