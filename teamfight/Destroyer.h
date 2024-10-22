#pragma once
#include "Character.h"


class Destroyer : public Character
{
public:
	Destroyer();
	~Destroyer();


	virtual void Skill() override;
	void CriticalStrike();
	void MassExplosion();

private:


};

