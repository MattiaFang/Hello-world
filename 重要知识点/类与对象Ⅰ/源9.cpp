//��Ԫ����
#include<iostream>
#include<string>
using namespace std;

//������Ԫ
class Building;
class GoodGay
{
public:
	GoodGay();
	Building *building;
	void visit();//��visit�������Է���Building����˽�г�Ա
};

//��Ա��������Ԫ
class GoodFriend
{
public:
	GoodFriend();
	Building *building_1;
	void visit1();//��visit�������Է���Building����˽�г�Ա
	void visit2();//��visit2���������Է���Building����˽�г�Ա
};

class Building
{
	//1.ȫ�ֱ�������Ԫ
	//ȫ�ֱ������Է���Building��˽�к���
	friend void goodGay(Building *building);
	//2.������Ԫ
	friend class GoodGay;
	//3.��Ա��������Ԫ    Ҫ��������
	friend void GoodFriend::visit1();
public:
	Building()
	{
		m_SittingRoom="����";
		m_BedRoom="����";
	}
public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

//����д��Ա����
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout<<"���������ڷ��ʣ�"<<building->m_SittingRoom<<endl;
	cout<<"���������ڷ��ʣ�"<<building->m_BedRoom<<endl;
}

GoodFriend::GoodFriend()
{
	//�������������
	building_1 = new Building;
}

void GoodFriend::visit1()
{
	cout<<"������1���ڷ��ʣ�"<<building_1->m_SittingRoom<<endl;
	cout<<"������1���ڷ��ʣ�"<<building_1->m_BedRoom<<endl;
}

void GoodFriend::visit2()
{
	cout<<"������2���ڷ��ʣ�"<<building_1->m_SittingRoom<<endl;
	//cout<<"������2���ڷ��ʣ�"<<building_1->m_BedRoom<<endl;
}


//ȫ�ֺ���
void goodGay(Building *building)
{
	cout<<"ȫ�ֺ��� ���ڷ��ʣ�"<<building->m_SittingRoom<<endl;
	cout<<"ȫ�ֺ��� ���ڷ��ʣ�"<<building->m_BedRoom<<endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

void test02()
{
	GoodGay g;
	g.visit();
}

void test03()
{
	GoodFriend f;
	f.visit1();
	f.visit2();
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}