#pragma once
#include "Character.h"

class BraveGuardian : public Character
{
public:
	BraveGuardian();
	~BraveGuardian();

	virtual void Skill() override;
};

