void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    goto sink;
sink:
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
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    wcscpy(data, L"\\u9580");
    goto sink;
sink:
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
    }
}
