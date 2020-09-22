//继承中的对象属性
#include<iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

void test01()
{
	cout<<"Size of Son = "<<sizeof(Son)<<endl;// 16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了 因此是访问不到 但是继承下来了
}

int main()
{
	test01();
	system("pause");
	return 0;
}