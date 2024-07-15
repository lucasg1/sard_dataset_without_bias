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
        data[0] = L'\0'; 
    }
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    if(VAR2)
    {
        data = new wchar_t[100];
        data[0] = L'\0'; 
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
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; 
        printWLine(data);
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
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
