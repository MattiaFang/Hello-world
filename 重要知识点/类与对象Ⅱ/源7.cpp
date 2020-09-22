//动态多态
//满足条件1.有继承关系 2.子类重写父类的虚函数
//动态多态使用
// 父类的指针或者引用指向子类对象
#include<iostream>
using namespace std;
//动物类
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout<<"动物在说话"<<endl;
	}
};
//Animal类内部结构 
//vfpte-虚函数（表）指针    vftable-虚函数表：表内记录虚函数的地址

//猫类
class Cat : public Animal
{
public:
	void speak()//子类重新父类虚函数
	{
		cout<<"小猫在说话"<<endl;
	}
};
//执行说话的函数
//地址早绑定 在编辑阶段确定函数地址
//如果想要执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animal &animal)//Animal &animal =cat 引用
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}

void test02()
{
	cout<<"sizeof Animal = "<<sizeof Animal<<endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}