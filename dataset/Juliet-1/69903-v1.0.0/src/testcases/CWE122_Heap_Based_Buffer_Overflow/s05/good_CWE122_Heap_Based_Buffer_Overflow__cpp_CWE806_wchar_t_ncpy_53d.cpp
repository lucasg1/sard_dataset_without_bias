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
void FUN3()
{
    wchar_t * data;
    data = new wchar_t[100];
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
} 
