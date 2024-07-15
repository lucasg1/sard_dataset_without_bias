void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN4(data);
}
void FUN1(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN1(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
    }
}
