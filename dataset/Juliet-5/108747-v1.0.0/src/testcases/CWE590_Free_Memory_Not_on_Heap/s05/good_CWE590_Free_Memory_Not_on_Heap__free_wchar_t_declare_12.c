void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
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
    }
    else
    {
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
    }
    printWLine(data);
    free(data);
}
