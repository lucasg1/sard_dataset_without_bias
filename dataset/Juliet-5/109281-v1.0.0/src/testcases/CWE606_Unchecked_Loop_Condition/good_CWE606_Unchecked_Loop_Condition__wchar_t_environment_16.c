void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    while(1)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        break;
    }
    while(1)
    {
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
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    while(1)
    {
        wcscpy(data, L"15");
        break;
    }
    while(1)
    {
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
        break;
    }
}
