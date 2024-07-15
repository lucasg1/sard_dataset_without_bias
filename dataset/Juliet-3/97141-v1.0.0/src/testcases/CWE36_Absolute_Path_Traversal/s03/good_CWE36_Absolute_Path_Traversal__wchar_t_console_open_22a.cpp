namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"c:\\temp\\file.txt");
        wcscat(data, L"/tmp/file.txt");
    }
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    if(VAR2)
    {
        wcscat(data, L"c:\\temp\\file.txt");
        wcscat(data, L"/tmp/file.txt");
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    VAR1 = 0; 
    data = FUN0(data);
    {
        int fileDesc;
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    ;
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    VAR2 = 1; 
    data = FUN1(data);
    {
        int fileDesc;
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    ;
}
} 
