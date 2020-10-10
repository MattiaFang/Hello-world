#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//反转 reverse
void test01()
{
	vector<int>v;
	for(int i = 0;i<10;i++)
	{
		v.push_back(i);
	}
	cout<<"反转前： " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	cout<<"反转后： " ;
	reverse(v.begin(),v.end());
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