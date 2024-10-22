#include "pch.h"
#include "Destroyer.h"


Destroyer::Destroyer() : Character(ClassType::Dealer, 20, 45, 7)
{

}

Destroyer::~Destroyer()
{

}

void Destroyer::Skill()
{
	std::cout << "파괴자 스킬!\n";
}

void Destroyer::CriticalStrike()
{

	std::cout << "치명적인 일격을 가합니다.\n";
}

void Destroyer::MassExplosion()
{

	std::cout << "모든 적에게 대폭발을 일으킵니다.\n";
}
