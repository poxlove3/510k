#pragma once


//
//										//  ����һ���˿���										
//


class Cards
{
public:
	Cards();
	~Cards();
	void RandCards(void); 				//  ϴ�� 
	int GetCard();						//  ����			
	int GetRemain(void)					//  ����ʣ������ 
	{
		return remain;
	};


private:
	int card[54];						//  ����		
	int remain;							//  ʣ������ 
};

Cards::Cards()
{
}

Cards::~Cards()
{
}
