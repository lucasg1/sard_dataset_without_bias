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
void FUN3(wchar_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0';
        printWLine(data);
    }
}
} 
