void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    switch(6)
    {
    case 6:
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        wchar_t dest[100] = L"";
<START>
        SNPRINTF(dest, 100-1, data);
<END>
        printWLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
