static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR1;
    {
        wchar_t dest[50] = L"";
        wcscat(dest, data);
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    VAR1 = data;
    FUN0();
}
