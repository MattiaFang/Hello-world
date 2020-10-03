#include<iostream>
#include<set>
using namespace std;

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(60);
	s1.insert(50);

	set<int>::iterator pos = s1.find(40);//返回是迭代器
	if(pos!= s1.end())
	{
		cout<<"已找到元素："<<*pos<<endl;
	}
	else
	{
		cout<<"未能找到"<<endl;
	}

	//统计
	//set容器中元素统计的个数只有两种可能：0和1
	int num1 = s1.count(50);
	cout<<"50元素个数："<<num1<<endl;
	int num2 = s1.count(66);
	cout<<"60元素个数："<<num2<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}