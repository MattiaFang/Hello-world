//2020.10.03
#include<iostream>
#include<list>
#include<string>
using namespace std;

//list排序案例 对于自定义数据类型做排序
//按照年龄进行升序，年龄相同的按照身高进行降序
class Person
{
public:
	Person(string name,int age,int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;//姓名
	int m_Age;   //年龄
	int m_Height;//身高
};

void printList( const list<Person>&L)
{
	for(list<Person>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout << "姓名："<< (*it).m_Name 
			 << "  年龄："<< (*it).m_Age 
			 << "  身高："<< (*it).m_Height<<endl;
	}
	cout<<endl;
}
bool ComparePerson(Person& p1,Person& p2)
{
	//如果年龄相同，按升高排序
	if(p1.m_Age==p2.m_Age)
	{
		return p1.m_Height>p2.m_Height;   //降序
	}
	//按照年龄排序
	return p1.m_Age<p2.m_Age;     //升序
}

void test01()
{
	//创建容器
	list<Person> L1;
	//准备数据
	Person p1("小米",20,176);
	Person p2("小霖",23,175);
	Person p3("小德",18,180);
	Person p4("小需",18,166);
	Person p5("小淘",12,186);
	Person p6("小非",18,171);
	//插入数据
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);
	
	printList(L1);

	//排序
	cout<<"————————排序后————————"<<endl;
	L1.sort(ComparePerson);//对于自定义类型，一定要自定义规则
	printList(L1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}