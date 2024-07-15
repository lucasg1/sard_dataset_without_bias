typedef struct _CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"15");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (swscanf(data, L"%d", &n) == 1)
        {
            intVariable = 0;
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
void FUN2(CWE606_Unchecked_Loop_Condition__wchar_t_console_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (swscanf(data, L"%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
