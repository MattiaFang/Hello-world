//2020.10.03
#include<iostream>
#include<list>
#include<string>
using namespace std;

//list������ �����Զ�����������������
//���������������������ͬ�İ�����߽��н���
class Person
{
public:
	Person(string name,int age,int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;//����
	int m_Age;   //����
	int m_Height;//���
};

void printList( const list<Person>&L)
{
	for(list<Person>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout << "������"<< (*it).m_Name 
			 << "  ���䣺"<< (*it).m_Age 
			 << "  ��ߣ�"<< (*it).m_Height<<endl;
	}
	cout<<endl;
}
bool ComparePerson(Person& p1,Person& p2)
{
	//���������ͬ������������
	if(p1.m_Age==p2.m_Age)
	{
		return p1.m_Height>p2.m_Height;   //����
	}
	//������������
	return p1.m_Age<p2.m_Age;     //����
}

void test01()
{
	//��������
	list<Person> L1;
	//׼������
	Person p1("С��",20,176);
	Person p2("С��",23,175);
	Person p3("С��",18,180);
	Person p4("С��",18,166);
	Person p5("С��",12,186);
	Person p6("С��",18,171);
	//��������
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);
	
	printList(L1);

	//����
	cout<<"��������������������󡪡�������������"<<endl;
	L1.sort(ComparePerson);//�����Զ������ͣ�һ��Ҫ�Զ������
	printList(L1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}