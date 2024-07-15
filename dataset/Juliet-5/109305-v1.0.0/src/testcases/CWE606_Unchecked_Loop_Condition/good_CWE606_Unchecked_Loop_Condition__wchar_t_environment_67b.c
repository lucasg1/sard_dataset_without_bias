typedef struct _CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"15");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct)
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
void FUN2(CWE606_Unchecked_Loop_Condition__wchar_t_environment_67_structType myStruct)
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
