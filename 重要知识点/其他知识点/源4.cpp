//�ص�����
#include<iostream>
using namespace std;
//����ָ�����������Ϊĳ�������Ĳ�����ʹ�õġ�һ��ͨ������ָ����õĺ���
void pop_array(int* array,int size,int (*getNext)(void))
{
	for(int i=0;i<size;i++)
		array[i]=getNext();
}
int getNextRom(void)
{
	return rand()%100;
}
int main()
{
	int myarray[10];
	pop_array(myarray,10,getNextRom);//���뺯��ʱ��Ҫ�����ţ���Ȼ���Ǻ���ָ��
	for(int i=0;i<10;i++)
		cout<<myarray[i]<<"   ";
	cout<<endl;
	system("pause");
	return 0;
}