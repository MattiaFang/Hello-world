//回调函数
#include<iostream>
using namespace std;
//函数指针变量可以作为某个函数的参数来使用的。一个通过函数指针调用的函数
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
	pop_array(myarray,10,getNextRom);//传入函数时不要加括号，不然不是函数指针
	for(int i=0;i<10;i++)
		cout<<myarray[i]<<"   ";
	cout<<endl;
	system("pause");
	return 0;
}