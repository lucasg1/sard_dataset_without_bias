void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    FUN0(data);
}
void FUN0(wchar_t * data)
{
    printWLine(data);
    free(data);
}
