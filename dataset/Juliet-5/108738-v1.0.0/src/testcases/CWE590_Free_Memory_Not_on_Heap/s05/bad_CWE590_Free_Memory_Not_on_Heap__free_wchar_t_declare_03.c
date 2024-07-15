void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(5==5)
    {
        {
            wchar_t dataBuffer[100];
            wmemset(dataBuffer, L'A', 100-1); 
            dataBuffer[100-1] = L'\0'; 
            data = dataBuffer;
        }
    }
    printWLine(data);
<START>
    free(data);
<END>
}
