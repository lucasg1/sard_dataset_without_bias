void FUN0()
{
    int i,k;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    }
    for(k = 0; k < 1; k++)
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
void FUN1()
{
    int h,j;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        wcscpy(data, L"\\u9580");
    }
    for(j = 0; j < 1; j++)
    {
        {
            char convertedText[10] = "";
            int requiredSize;
            requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
            WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
        }
    }
}
