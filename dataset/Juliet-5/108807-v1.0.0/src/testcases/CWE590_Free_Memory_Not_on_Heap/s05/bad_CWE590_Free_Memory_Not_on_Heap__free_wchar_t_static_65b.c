void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL; 
    {
        static wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    printWLine(data);
<START>
    free(data);
<END>
}
