namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    switch(6)
    {
    case 6:
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        FILE *pFile = NULL;
<START>
        pFile = FOPEN(data, L"wb+");
<END>
        if (pFile != NULL)
        {
            fclose(pFile);
        }
    }
}
} 
