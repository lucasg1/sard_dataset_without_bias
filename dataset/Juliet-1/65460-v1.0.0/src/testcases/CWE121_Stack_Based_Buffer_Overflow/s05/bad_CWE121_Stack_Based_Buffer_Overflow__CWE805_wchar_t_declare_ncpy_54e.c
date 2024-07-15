void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    data = dataBadBuffer;
    data[0] = L'\0'; 
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN2(wchar_t * data)
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
    }
}
