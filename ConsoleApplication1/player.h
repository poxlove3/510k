#pragma once


//
//										//  ����һ�����										
//

class player
{


public:
	player();
	~player();

	void NewGame(void);					//  ��ʼ����Ϸ
	void AddCard(int num);				//  ����
	void IsValid(void);					//	�����Ƿ���Ϲ涨
private:

};

player::player()
{
}

player::~player()
{
}