namespace NAMESPACE0
{
void FUN0()
{
    int i;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            data = dataBuffer - 8;
        }
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = L'\0';
        printWLine(data);
    }
}
} 
