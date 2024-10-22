#pragma once
#include "enums.h"



class Character
{
public:
	Character();
	Character(ClassType C_Type, int Atk, int Hp, int Def) : C_Type(C_Type), mAtk(Atk), mHp(Hp), mDef(Def) { }
	~Character();

	virtual void Skill() = 0;

private:
	ClassType C_Type;
	int mAtk;
	int mHp;
	int mDef;
};

