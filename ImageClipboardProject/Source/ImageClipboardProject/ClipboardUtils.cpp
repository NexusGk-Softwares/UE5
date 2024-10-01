#include "ClipboardUtils.h"
#include "Misc/Clipboard.h"
#include "ImageUtils.h"
#include "Windows/WindowsPlatformApplicationMisc.h" // Windows specific

void UClipboardUtils::CopyImageToClipboard(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData)
{
    // Convert FColor array to bitmap (BMP) format
    TArray<uint8> BMPData;
    FImageUtils::CompressImageArray(InSizeX, InSizeY, InImageData, BMPData);

    // Convert BMPData to a string format to copy to the clipboard
    FString ClipboardImageData = FString::FromHexBlob(BMPData.GetData(), BMPData.Num());

    // Copy the image to the clipboard using Windows platform functions
    FPlatformApplicationMisc::ClipboardCopy(*ClipboardImageData);

    // Notify that the image has been copied to the clipboard
    UE_LOG(LogTemp, Log, TEXT("Image successfully copied to the clipboard."));
}
