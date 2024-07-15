namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR2;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcsncpy(data, source, 100-1);
        data[100-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    data[0] = L'\0'; 
    VAR2 = data;
    FUN0();
}
} 
