namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer - 8;
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
<START>
            wcscpy(data, source);
<END>
            printWLine(data);
        }
    }
}
} 
