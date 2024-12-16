// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacter, public IEnemyInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override; // 순수 가상 함수기 때문 반드시 둘다 재정의 해야함
	virtual void UnHighlightActor() override; // 그렇지 않으면 인스턴스를 생성할 수 없다. 
	
};
