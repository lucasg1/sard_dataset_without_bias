namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    wcscat(data, L"c:\\temp\\file.txt");
    wcscat(data, L"/tmp/file.txt");
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data)
{
    {
        int fileDesc;
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}
} 
