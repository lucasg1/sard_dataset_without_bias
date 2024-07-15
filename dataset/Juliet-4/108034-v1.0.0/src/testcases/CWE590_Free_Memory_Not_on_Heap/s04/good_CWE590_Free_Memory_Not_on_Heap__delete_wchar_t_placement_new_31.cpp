namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        printWcharLine(*data);
        delete data;
    }
}
} 
