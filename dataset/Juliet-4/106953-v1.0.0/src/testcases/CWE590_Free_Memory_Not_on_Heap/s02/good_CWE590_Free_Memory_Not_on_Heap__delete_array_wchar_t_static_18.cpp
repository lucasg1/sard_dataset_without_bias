namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    goto source;
source:
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    printWLine(data);
    delete [] data;
}
} 
