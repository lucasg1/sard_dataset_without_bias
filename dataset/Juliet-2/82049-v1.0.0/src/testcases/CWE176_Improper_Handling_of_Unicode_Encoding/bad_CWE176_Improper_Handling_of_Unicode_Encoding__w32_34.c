typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE176_Improper_Handling_of_Unicode_Encoding__w32_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE176_Improper_Handling_of_Unicode_Encoding__w32_34_unionType myUnion;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
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
