void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580");
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    FUN2(data);
}
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN7(data);
}
void FUN9(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN11(data);
}
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN8(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN8(data);
}
void FUN9(wchar_t * data)
{
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
    }
}
void FUN11(wchar_t * data)
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