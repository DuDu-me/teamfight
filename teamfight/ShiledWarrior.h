#pragma once
#include "Character.h"

class ShiledWarrior : public Character
{
public:
	ShiledWarrior();
	~ShiledWarrior();

	virtual void Skill() override;
};

