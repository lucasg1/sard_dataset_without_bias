namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100*2];
        wmemset(dest, L'C', 100*2-1); 
        dest[100*2-1] = L'\0'; 
        wcscpy(dest, data);
        printWLine(dest);
    }
}
} 
