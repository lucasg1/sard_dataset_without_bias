static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(FUN0())
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    if(FUN0())
    {
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
