void FUN0()
{
    int i;
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 250-dataLen-1);
            }
        }
    }
<START>
    PUTENV(data);
<END>
}
