namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN7(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(wchar_t * data)
{
    {
        HANDLE hFile;
        hFile = CreateFileW(data,
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
