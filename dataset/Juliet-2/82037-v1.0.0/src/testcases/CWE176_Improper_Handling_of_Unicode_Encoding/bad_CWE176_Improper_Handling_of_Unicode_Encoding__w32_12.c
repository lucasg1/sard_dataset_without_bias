void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    }
    else
    {
        wcscpy(data, L"\\u9580");
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            char convertedText[10] = "";
            int requiredSize;
            requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
<START>
            WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
<END>
        }
    }
    else
    {
        {
            char convertedText[10] = "";
            int requiredSize;
            requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
            if (requiredSize < 10)
            {
                WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
            }
            else
            {
                printLine("Destination buffer not large enough to perform conversion.");
            }
        }
    }
}
