#include"orderFile.h"

//���캯��
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE,ios::in);

	string date;     //����
	string interval; //ʱ���
	string stuId;    //ѧ������
	string stuName;  //ѧ������
	string roomId;   //�������
	string status;   //ԤԼ״̬

	this->m_Size = 0;//��¼����

	while(ifs>>date&&ifs>>interval&&
		  ifs>>stuId&&ifs>>stuName&&
		  ifs>>roomId&&ifs>>status)
	{
		//cout<<roomId<<endl;

		//date:11111
		string key;
		string value;
		map<string,string>m;
		//��ȡ����
		int pos = date.find(":");//4
		if(pos!=-1)
		{
			key = date.substr(0,pos);
			value = date.substr(pos+1,date.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//cout<<"key = "<<key<<endl;
		//cout<<"value = "<<value<<endl;

		//��ȡʱ���
		pos = interval.find(":");//4
		if(pos!=-1)
		{
			key = interval.substr(0,pos);
			value = interval.substr(pos+1,interval.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//��ȡѧ��
		pos = stuId.find(":");//4
		if(pos!=-1)
		{
			key = stuId.substr(0,pos);
			value = stuId.substr(pos+1,stuId.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//��ȡ����
		pos = stuName.find(":");//4
		if(pos!=-1)
		{
			key = stuName.substr(0,pos);
			value = stuName.substr(pos+1,stuName.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//��ȡ������
		pos = roomId.find(":");//4
		if(pos!=-1)
		{
			key = roomId.substr(0,pos);
			value = roomId.substr(pos+1,roomId.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}
		//��ȡԤԼ״̬
		pos = status.find(":");//4
		if(pos!=-1)
		{
			key = status.substr(0,pos);
			value = status.substr(pos+1,status.size());//size=10 pos=4  size-pos=6
			m.insert(make_pair(key,value));
		}

		//��С�������������
		this->m_orderData.insert(make_pair(this->m_Size,m));
		this->m_Size++;
	}
	ifs.close();

	////�������map����
	//for(map<int,map<string,string>>::iterator it = m_orderData.begin();it!=m_orderData.end();it++)
	//{
	//	cout<<"����Ϊ��"<<it->first<<"  value ="<<endl;
	//	for(map<string,string>::iterator mit = (*it).second.begin();mit!=it->second.end();mit++)
	//	{
	//		cout<<"key = "<<mit->first <<"  value ="<<mit->second<<"   ";
	//	}
	//	cout << endl;
	//}
}
	
//����ԤԼ��¼
void OrderFile::updateOrder()
{
}