// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "MyBlueprintFunctionLibrary.h"



void UMyBlueprintFunctionLibrary::ExecuteTestCode(const FString &InText)
{
    FStringAssetReference AssetRef = InText;

    if (AssetRef.IsNull())
    {
        UE_LOG(LogTemp, Log, TEXT("AAAAAAAAAAAAAAAAA"));
    }

    if (AssetRef.IsValid())
    {
        UE_LOG(LogTemp, Log, TEXT("BBBBBBBBBBBBBBBBB"));
    }

}
