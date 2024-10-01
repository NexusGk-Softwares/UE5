#include "ImageClipboardWidget.h"
#include "ClipboardUtils.h" // Include your clipboard utility header

void UImageClipboardWidget::OnCopyImageButtonClicked()
{
    // Define the size of the image
    const int32 InSizeX = 256;
    const int32 InSizeY = 256;

    // Create a mock image data array
    TArray<FColor> InImageData;
    InImageData.SetNum(InSizeX * InSizeY);

    // Fill the array with red color data
    for (int32 i = 0; i < InImageData.Num(); ++i)
    {
        InImageData[i] = FColor::Red;
    }

    // Call the function to copy the image to the clipboard
    CopyImageToClipboard(InSizeX, InSizeY, InImageData);
}
