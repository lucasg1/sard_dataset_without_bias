void FUN0()
{
    int i;
    wchar_t * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
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
