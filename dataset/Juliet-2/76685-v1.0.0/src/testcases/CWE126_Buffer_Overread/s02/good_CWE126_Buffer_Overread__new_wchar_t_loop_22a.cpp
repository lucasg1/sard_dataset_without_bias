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
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    if(VAR2)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
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
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
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
    ;
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN1(data);
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
    ;
}
} 
