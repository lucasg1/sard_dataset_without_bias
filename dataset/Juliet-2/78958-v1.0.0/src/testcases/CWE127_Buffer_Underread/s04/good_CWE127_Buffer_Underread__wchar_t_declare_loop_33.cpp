namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    {
        wchar_t * data = dataRef;
        {
            size_t i;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); 
            dest[100-1] = L'\0'; 
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
} 
