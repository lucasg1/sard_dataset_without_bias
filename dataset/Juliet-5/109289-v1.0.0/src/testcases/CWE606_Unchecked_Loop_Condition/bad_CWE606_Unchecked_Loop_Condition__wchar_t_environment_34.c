typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE606_Unchecked_Loop_Condition__wchar_t_environment_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE606_Unchecked_Loop_Condition__wchar_t_environment_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            int i, n, intVariable;
            if (swscanf(data, L"%d", &n) == 1)
            {
                intVariable = 0;
<START>
                for (i = 0; i < n; i++)
<END>
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
