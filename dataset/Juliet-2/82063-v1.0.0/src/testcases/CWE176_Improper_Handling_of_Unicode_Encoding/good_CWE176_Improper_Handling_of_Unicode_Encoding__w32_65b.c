void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580");
    funcPtr(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
    }
}
void FUN2(wchar_t * data)
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
