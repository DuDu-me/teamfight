#include "pch.h"
#include "GameLoop.h"

void GameLoop::Loop()
{
	Team team;

	//�������� ������� �켱���� ����
	srand(time(NULL));
	switch (rand() % 2)
	{
	case 0:
		team.BlueTeam = 0;
		team.RedTeam = 1;

	case 1:
		team.RedTeam = 0;
		team.RedTeam = 1;

	}
	
	//���������� ���� 3�� �̱�


	//��������� ���� 3�� �̱�


	//���� ����(���� -> �İ� �� �ݺ�. �� ���� ������ ��� �����������)

}
