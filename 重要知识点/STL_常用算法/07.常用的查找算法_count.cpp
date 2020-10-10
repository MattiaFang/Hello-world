//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//查找算法count

//统计内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(70);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(40);
	v.push_back(10);

	//查找  元素为40 的个数
	int ret=count(v.begin(),v.end(),40);
	cout<<"元素为40的有："<< ret <<" 个"<<endl;
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
	bool operator==(const Person &p)   //底层一定要加const!!!
	{
		if(this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};

void test02()
{
	Person p1("张三",23);
	Person p2("李四",18);
	Person p3("王五",22);
	Person p4("赵六",11);
	Person p5("吴七",18);
	Person p6("刘八",18);
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
	Person p("小明",18);
	int ret=count(vp.begin(),vp.end(),p);
	cout<<"和小明同岁的人有多少："<< ret <<" 名"<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}