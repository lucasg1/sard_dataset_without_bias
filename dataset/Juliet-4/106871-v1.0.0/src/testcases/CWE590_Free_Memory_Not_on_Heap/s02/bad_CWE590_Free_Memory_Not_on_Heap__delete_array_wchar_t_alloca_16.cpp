namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    while(1)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
            wmemset(dataBuffer, L'A', 100-1); 
            dataBuffer[100-1] = L'\0'; 
            data = dataBuffer;
        }
        break;
    }
    printWLine(data);
<START>
    delete [] data;
<END>
}
} 
