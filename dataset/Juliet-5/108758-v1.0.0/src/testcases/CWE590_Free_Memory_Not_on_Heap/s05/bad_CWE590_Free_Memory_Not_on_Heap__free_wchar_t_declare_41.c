void FUN0(wchar_t * data)
{
    printWLine(data);
<START>
    free(data);
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    FUN0(data);
}
