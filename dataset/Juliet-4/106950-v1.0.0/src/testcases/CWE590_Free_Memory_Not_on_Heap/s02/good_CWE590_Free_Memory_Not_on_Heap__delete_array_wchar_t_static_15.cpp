namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    break;
    }
    printWLine(data);
    delete [] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printWLine(data);
    delete [] data;
}
} 
