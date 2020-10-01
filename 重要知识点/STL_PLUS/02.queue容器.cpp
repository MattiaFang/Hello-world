//2020.10.01
#include<iostream>
#include<queue>
#include<string>
using namespace std;

//队列Quenen容器
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
void test01()
{
	//准备数据
	Person p1("小米",12);
	Person p2("华为",22);
	Person p3("荣耀",17);
	Person p4("三星",32);
	Person p5("苹果",28);
	//特点:符合先进先出数据结构
	queue<Person> q;

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "队列的大小为： "<<q.size()<<endl;
	//只要队列不为空，查看队头和队尾并且执行出栈操作
	while(!q.empty())
	{
		//查看队头
		cout<<"队头元素 姓名为："<< q.front().m_Name<<" 年龄为："<<q.front().m_Age<<endl;

		//查看队头
		cout<<"队尾元素 姓名为："<< q.back().m_Name<<" 年龄为："<<q.back().m_Age<<endl;
		
		cout<<"出栈————————》》》"<<endl;
		//出栈
		q.pop();
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}