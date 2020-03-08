#pragma once

enum Type
{
	Unkown,							//  未知
	Single,							//  单张
	Double,							//  对子
	Three,							//  炸弹
	Four，							//  四炸弹
	Bomb,							//  王炸	
};


class CardGruop
{

	friend class Player;


public:
	CardGruop();
	
	~CardGruop();

	

private:

	


};

CardGruop::CardGruop()
{
}

CardGruop::~CardGruop()
{
}