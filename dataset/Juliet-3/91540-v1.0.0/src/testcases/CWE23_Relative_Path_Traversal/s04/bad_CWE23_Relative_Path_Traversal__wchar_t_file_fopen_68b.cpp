wchar_t * VAR0;
wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (FILENAME_MAX-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(FILENAME_MAX-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
    VAR0 = data;
    FUN0();
}
} 
extern wchar_t * VAR0;
extern wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    wchar_t * data = VAR0;
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
