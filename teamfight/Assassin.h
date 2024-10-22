#pragma once
#include "Character.h"

class Assassin : public Character
{
public:
	Assassin();
	~Assassin();

	virtual void Skill() override;

};

