#include "ClipboardUtils.h"
#include "Misc/Clipboard.h"
#include "ImageUtils.h"

void UClipboardUtils::CopyImageToClipboard(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData)
{
    // Convert the image data into a format that can be copied to the clipboard
    FImageUtils::CompressImageArray(InSizeX, InSizeY, InImageData, /* compressed data here */);

    // Copy the compressed image to the clipboard (Platform-specific logic required)
    FPlatformApplicationMisc::ClipboardCopy(TEXT("Image copied to clipboard"));
}
