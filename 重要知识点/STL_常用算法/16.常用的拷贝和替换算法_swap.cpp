#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//����swap
class Myprint
{
public:
	void operator()(int val)
	{
		cout<< val <<" ";
	}
};
void printV(vector<int>& v)
{
	for_each(v.begin(),v.end(),Myprint());
	cout<<endl;
}
void test01()
{
	//����ͬ���������͵�����
	vector<int>v1;
	vector<int>v2;
	for(int i = 0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+10);
	}
	cout<<"�滻ǰv1������ " ;
	/*for(vector<int>::iterator it = v1.begin();it!= v1.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;*/
	printV(v1);
	cout<<"�滻ǰv2������ " ;
	printV(v2);

	swap(v1,v2);

	cout<<"�滻��v1������ " ;
	printV(v1);
	cout<<"�滻��v2������ " ;
	printV(v2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}