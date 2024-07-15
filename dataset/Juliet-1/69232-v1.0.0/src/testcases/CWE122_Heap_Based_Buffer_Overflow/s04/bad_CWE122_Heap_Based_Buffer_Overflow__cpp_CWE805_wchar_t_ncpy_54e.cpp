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
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[50];
    data[0] = L'\0'; 
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data)
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
        delete [] data;
    }
}
} 
