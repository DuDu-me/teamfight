#include "pch.h"
#include "GameLoop.h"

void GameLoop::Loop()
{
	Team team;

	//레드팀과 블루팀의 우선순위 결정
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
	
	//레드팀에서 팀원 3명 뽑기


	//블루팀에서 팀원 3명 뽑기


	//게임 루프(선공 -> 후공 을 반복. 한 팀의 팀원이 모두 사라질때까지)

}
