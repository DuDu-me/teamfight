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
	std::cout << "�ı��� ��ų!\n";
}

void Destroyer::CriticalStrike()
{

	std::cout << "ġ������ �ϰ��� ���մϴ�.\n";
}

void Destroyer::MassExplosion()
{

	std::cout << "��� ������ �������� ����ŵ�ϴ�.\n";
}
