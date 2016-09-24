#include"CommonItems.h"
#include "EnemyPattern.h"
#include "EnemyPatternFactory.h"
#include "EnemyPatternA.h"
#include "EnemyPatternB.h"


//敵のパターンを作成
EnemyPattern* EnemyPatternFactory::CreateEnemyPattern(EnemyPatternID enemyPattern)
{
	EnemyPattern* pEnemyPattern = nullptr;

	switch (enemyPattern)
	{
	case Enemy_patternA:

		pEnemyPattern = new EnemyPatternA();

		break;

	case Enemy_patternB:

		pEnemyPattern = new EnemyPatternB();

		break;

	case Enemy_patternBOSS:
		break;

	case EnemyEnd:
		break;

	default:
		break;

	};

	return pEnemyPattern;
}

