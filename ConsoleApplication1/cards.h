#pragma once


//
//										//  这是一幅扑克牌										
//


class Cards
{
public:
	Cards();
	~Cards();
	void RandCards(void); 				//  洗牌 
	int GetCard();						//  摸牌			
	int GetRemain(void)					//  返回剩余牌数 
	{
		return remain;
	};


private:
	int card[54];						//  牌数		
	int remain;							//  剩余牌数 
};

Cards::Cards()
{
}

Cards::~Cards()
{
}
