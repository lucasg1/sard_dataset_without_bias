namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    {
        size_t dataLen = wcslen(data);
        if (FILENAME_MAX-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(FILENAME_MAX-dataLen), stdin) != NULL)
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
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    FUN0(data);
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
