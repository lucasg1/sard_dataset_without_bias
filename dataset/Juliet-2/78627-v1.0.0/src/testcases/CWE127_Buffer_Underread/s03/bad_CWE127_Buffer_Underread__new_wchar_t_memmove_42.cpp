namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
<START>
        memmove(dest, data, 100*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
} 
