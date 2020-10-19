#include"orderFile.h"

//构造函数
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE,ios::in);

	string date;     //日期
	string interval; //时间段
	string stuId;    //学生编码
	string stuName;  //学生姓名
	string roomId;   //机房编号
	string status;   //预约状态

	this->m_Size = 0;//记录条数

	while(ifs>>date&&ifs>>interval&&
		  ifs>>stuId&&ifs>>stuName&&
		  ifs>>roomId&&ifs>>status)
	{
		//cout<<roomId<<endl;

		//date:11111
		string key;
		string value;
		map<string,string>m;
		//截取日期
		int pos = date.find(":");//4
		if(pos!=-1)
		{
			key = date.substr(0,pos);
			value = date.substr(pos+1,date.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//cout<<"key = "<<key<<endl;
		//cout<<"value = "<<value<<endl;

		//截取时间段
		pos = interval.find(":");//4
		if(pos!=-1)
		{
			key = interval.substr(0,pos);
			value = interval.substr(pos+1,interval.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//截取学号
		pos = stuId.find(":");//4
		if(pos!=-1)
		{
			key = stuId.substr(0,pos);
			value = stuId.substr(pos+1,stuId.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//截取姓名
		pos = stuName.find(":");//4
		if(pos!=-1)
		{
			key = stuName.substr(0,pos);
			value = stuName.substr(pos+1,stuName.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//截取机房号
		pos = roomId.find(":");//4
		if(pos!=-1)
		{
			key = roomId.substr(0,pos);
			value = roomId.substr(pos+1,roomId.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//截取预约状态
		pos = status.find(":");//4
		if(pos!=-1)
		{
			key = status.substr(0,pos);
			value = status.substr(pos+1,status.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}

		//将小容器放入大容器
		this->m_orderData.insert(make_pair(this->m_Size,m));
		this->m_Size++;
	}
	ifs.close();

	////测试最大map容器
	//for(map<int,map<string,string>>::iterator it = m_orderData.begin();it!=m_orderData.end();it++)
	//{
	//	cout<<"条数为："<<it->first<<"  value ="<<endl;
	//	for(map<string,string>::iterator mit = (*it).second.begin();mit!=it->second.end();mit++)
	//	{
	//		cout<<"key = "<<mit->first <<"  value ="<<mit->second<<"   ";
	//	}
	//	cout << endl;
	//}
}
	
//更新预约记录
void OrderFile::updateOrder()
{
}