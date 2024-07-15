namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    {
        char buffer[sizeof(wchar_t)];
        wchar_t * dataBuffer = new(buffer) wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        printWcharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
