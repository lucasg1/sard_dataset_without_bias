void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        wcscpy(data, L"\\u9580");
        break;
    }
    switch(7)
    {
    case 7:
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wcscpy(data, L"\\u9580");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
