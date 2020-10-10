//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//查找算法count

//统计内置数据类型
class greatFive
{
public:
	bool operator()(int val)
	{
		return  val>5;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(7);
	v.push_back(3);
	v.push_back(4);
	v.push_back(8);
	v.push_back(4);
	v.push_back(9);

	//查找  元素为大于5 的个数
	int ret=count_if(v.begin(),v.end(),greatFive());
	cout<<"元素大于5的有："<< ret <<" 个"<<endl;
}

//统计自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age  = age;
	}

	string m_Name;
	int m_Age;
};
class greatTw
{
public:
	bool operator()(const Person &p)//对比要加const
	{
		return p.m_Age>20;
	}
};
void test02()
{
	Person p1("张三",23);
	Person p2("李四",18);
	Person p3("王五",22);
	Person p4("赵六",11);
	Person p5("吴七",18);
	Person p6("刘八",28);
	Person p7("郑九",18);
	vector<Person>vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);
	vp.push_back(p6);
	vp.push_back(p7);

	//查找
	int ret=count_if(vp.begin(),vp.end(),greatTw());
	cout<<"年龄大于20的人有多少："<< ret <<" 名"<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}