namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    VAR1 = data;
    FUN0();
}
} 
