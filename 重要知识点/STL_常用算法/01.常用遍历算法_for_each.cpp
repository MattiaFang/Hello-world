//2020.10.09
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//ÆÕÍ¨º¯Êý
void printVector(int val)
{
	cout<<val<<" ";
}
//·Âº¯Êý
class printVector_2
{
public:
	void operator()(int val)
	{
		cout << val<<" ";
	}

};
void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),printVector);
	cout<<endl;

	for_each(v.begin(),v.end(),printVector_2());
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}