//判断圆与点的距离
//2020.8.10
#include<iostream>
#include<string>
using namespace std;

//设置点
class point
{
public:
	void setPoint(int x,int y)
	{
		p_x=x;
		p_y=y;
	}
	int getPoint_x()
	{
		return p_x;
	}
	int getPoint_y()
	{
		return p_y;
	}

private:
	int p_x;
	int p_y;
};

//设置圆类
class circle
{
public:
	void setLength(int L)
	{
		length=L;
	}
	int getLength()
	{
		return length;
	}
	void setPoint(point c)
	{
		center=c;
	}
	point getPoint()
	{
		return center;
	}
	//在成员函数实现
	void isIn_(point &s)
	{
		int distance=pow((getPoint().getPoint_x()-s.getPoint_x()),2)+pow((getPoint().getPoint_y()-s.getPoint_y()),2);
		int len=pow(getLength(),2);
		if(distance==len) 
			cout<<"点在圆上"<<endl;
		else if(distance<len) 	
			cout<<"点在圆内"<<endl;
		else 
			cout<<"点在圆外"<<endl;
	}
private:
	int length;
	point center;
};

//全局函数实现
void isIn(circle &f,point &s)//引用
{
	int distance=pow((f.getPoint().getPoint_x()-s.getPoint_x()),2)+pow((f.getPoint().getPoint_y()-s.getPoint_y()),2);
	int len=pow(f.getLength(),2);
	if(distance==len) 
		cout<<"点在圆上"<<endl;
	else if(distance<len) 
		cout<<"点在圆内"<<endl;
	else 
		cout<<"点在圆外"<<endl;
	
}
int main()
{
	point s;//点
	point c;//一个点作为圆心
	circle f;//圆
	s.setPoint(5,14);//设置点位置
	c.setPoint(5,5);//设置点（圆心）位置
	f.setLength(8);//设置圆的半径
	f.setPoint(c);//设置圆心
	//isIn(f,s);//全局函数实现
	f.isIn_(s);//成员函数实现
	system("pause");
	return 0;
}