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
    data = NULL;
    data = new wchar_t[50];
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
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
