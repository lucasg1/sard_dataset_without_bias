static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        {
            wchar_t dest[100] = L"";
<START>
            SNPRINTF(dest, 100-1, data);
<END>
            printWLine(dest);
        }
    }
}
