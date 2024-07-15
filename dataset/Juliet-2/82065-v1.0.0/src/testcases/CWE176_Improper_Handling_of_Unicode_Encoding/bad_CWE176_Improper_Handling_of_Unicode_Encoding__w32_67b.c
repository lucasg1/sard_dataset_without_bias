typedef struct _CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType
{
    wchar_t * structFirst;
} CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType;
void FUN0(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType myStruct;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wcscpy(data, L"\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644\\u9580\\u961c\\u9640\\u963f\\u963b\\u9644");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType
{
    wchar_t * structFirst;
} CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType;
void FUN0(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        char convertedText[10] = "";
        int requiredSize;
        requiredSize = WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, 0, 0, 0);
<START>
        WideCharToMultiByte(CP_ACP, WC_COMPOSITECHECK, data, -1, convertedText, requiredSize , 0, 0);
<END>
    }
}
