namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR2;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        memcpy(dest, data, 100*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
