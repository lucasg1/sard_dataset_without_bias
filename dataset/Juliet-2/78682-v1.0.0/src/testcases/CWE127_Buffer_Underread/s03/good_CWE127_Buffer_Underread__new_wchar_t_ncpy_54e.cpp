namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
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
void FUN6(wchar_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        wcsncpy(dest, data, wcslen(dest));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
} 