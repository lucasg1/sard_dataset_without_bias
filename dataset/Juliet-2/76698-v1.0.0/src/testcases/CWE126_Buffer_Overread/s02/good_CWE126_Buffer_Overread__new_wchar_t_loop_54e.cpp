namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
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
void FUN4(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data)
{
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
