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
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
<START>
        wcscpy(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
