//�ж�Բ���ľ���
//2020.8.10
#include<iostream>
#include<string>
using namespace std;

//���õ�
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

//����Բ��
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
	//�ڳ�Ա����ʵ��
	void isIn_(point &s)
	{
		int distance=pow((getPoint().getPoint_x()-s.getPoint_x()),2)+pow((getPoint().getPoint_y()-s.getPoint_y()),2);
		int len=pow(getLength(),2);
		if(distance==len) 
			cout<<"����Բ��"<<endl;
		else if(distance<len) 	
			cout<<"����Բ��"<<endl;
		else 
			cout<<"����Բ��"<<endl;
	}
private:
	int length;
	point center;
};

//ȫ�ֺ���ʵ��
void isIn(circle &f,point &s)//����
{
	int distance=pow((f.getPoint().getPoint_x()-s.getPoint_x()),2)+pow((f.getPoint().getPoint_y()-s.getPoint_y()),2);
	int len=pow(f.getLength(),2);
	if(distance==len) 
		cout<<"����Բ��"<<endl;
	else if(distance<len) 
		cout<<"����Բ��"<<endl;
	else 
		cout<<"����Բ��"<<endl;
	
}
int main()
{
	point s;//��
	point c;//һ������ΪԲ��
	circle f;//Բ
	s.setPoint(5,14);//���õ�λ��
	c.setPoint(5,5);//���õ㣨Բ�ģ�λ��
	f.setLength(8);//����Բ�İ뾶
	f.setPoint(c);//����Բ��
	//isIn(f,s);//ȫ�ֺ���ʵ��
	f.isIn_(s);//��Ա����ʵ��
	system("pause");
	return 0;
}