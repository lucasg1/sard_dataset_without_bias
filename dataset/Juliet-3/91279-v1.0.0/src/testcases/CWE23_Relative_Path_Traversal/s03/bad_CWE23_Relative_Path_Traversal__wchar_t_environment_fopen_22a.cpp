namespace NAMESPACE0
{
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
            }
        }
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN0(data);
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
    ;
}
} 
