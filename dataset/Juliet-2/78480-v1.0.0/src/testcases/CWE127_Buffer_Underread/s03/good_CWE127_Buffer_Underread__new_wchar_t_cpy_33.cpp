namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[100*2];
            wmemset(dest, L'C', 100*2-1); 
            dest[100*2-1] = L'\0'; 
            wcscpy(dest, data);
            printWLine(dest);
        }
    }
}
} 
