#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImageClipboardWidget.generated.h"

UCLASS()
class IMAGECLIPBOARDPROJECT_API UImageClipboardWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void OnCopyImageButtonClicked();
};
