#pragma once


//
//										//  这是一名玩家										
//

class player
{


public:
	player();
	~player();

	void NewGame(void);					//  开始新游戏
	void AddCard(int num);				//  摸牌
	void IsValid(void);					//	出牌是否符合规定
private:

};

player::player()
{
}

player::~player()
{
}