void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
