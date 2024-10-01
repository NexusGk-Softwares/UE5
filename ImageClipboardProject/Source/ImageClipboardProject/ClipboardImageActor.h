#pragma once

#include "CoreMinimal.h"
#include "ClipboardUtils.generated.h"

UCLASS()
class IMAGECLIPBOARDPROJECT_API UClipboardUtils : public UObject
{
    GENERATED_BODY()

public:
    // Function to copy the image to the clipboard
    static void CopyImageToClipboard(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData);
};
