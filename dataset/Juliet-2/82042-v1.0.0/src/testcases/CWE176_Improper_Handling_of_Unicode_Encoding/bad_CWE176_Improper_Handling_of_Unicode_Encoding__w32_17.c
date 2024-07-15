void FUN0()
{
    int i,j;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    }
    for(j = 0; j < 1; j++)
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
}
