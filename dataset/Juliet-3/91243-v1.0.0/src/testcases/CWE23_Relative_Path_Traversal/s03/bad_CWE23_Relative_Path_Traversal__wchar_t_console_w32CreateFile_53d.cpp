namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
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
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data)
{
    {
        HANDLE hFile;
<START>
        hFile = CreateFileW(data,
<END>
                            (GENERIC_WRITE|GENERIC_READ),
                            0,
                            NULL,
                            OPEN_ALWAYS,
                            FILE_ATTRIBUTE_NORMAL,
                            NULL);
        if (hFile != INVALID_HANDLE_VALUE)
        {
            CloseHandle(hFile);
        }
    }
}
} 
