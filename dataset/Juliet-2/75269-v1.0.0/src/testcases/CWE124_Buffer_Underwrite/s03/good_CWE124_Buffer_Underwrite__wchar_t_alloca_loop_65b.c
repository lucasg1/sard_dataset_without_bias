void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = L'\0';
        printWLine(data);
    }
}
