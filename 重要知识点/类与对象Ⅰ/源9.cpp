//友元函数
#include<iostream>
#include<string>
using namespace std;

//类做友元
class Building;
class GoodGay
{
public:
	GoodGay();
	Building *building;
	void visit();//让visit函数可以访问Building类中私有成员
};

//成员函数做友元
class GoodFriend
{
public:
	GoodFriend();
	Building *building_1;
	void visit1();//让visit函数可以访问Building类中私有成员
	void visit2();//让visit2函数不可以访问Building类中私有成员
};

class Building
{
	//1.全局变量做友元
	//全局变量可以访问Building中私有函数
	friend void goodGay(Building *building);
	//2.类做友元
	friend class GoodGay;
	//3.成员函数做友元    要表明类名
	friend void GoodFriend::visit1();
public:
	Building()
	{
		m_SittingRoom="客厅";
		m_BedRoom="卧室";
	}
public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//类外写成员函数
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout<<"好友类正在访问："<<building->m_SittingRoom<<endl;
	cout<<"好友类正在访问："<<building->m_BedRoom<<endl;
}

GoodFriend::GoodFriend()
{
	//创建建筑物对象
	building_1 = new Building;
}

void GoodFriend::visit1()
{
	cout<<"朋友类1正在访问："<<building_1->m_SittingRoom<<endl;
	cout<<"朋友类1正在访问："<<building_1->m_BedRoom<<endl;
}

void GoodFriend::visit2()
{
	cout<<"朋友类2正在访问："<<building_1->m_SittingRoom<<endl;
	//cout<<"朋友类2正在访问："<<building_1->m_BedRoom<<endl;
}


//全局函数
void goodGay(Building *building)
{
	cout<<"全局函数 正在访问："<<building->m_SittingRoom<<endl;
	cout<<"全局函数 正在访问："<<building->m_BedRoom<<endl;
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