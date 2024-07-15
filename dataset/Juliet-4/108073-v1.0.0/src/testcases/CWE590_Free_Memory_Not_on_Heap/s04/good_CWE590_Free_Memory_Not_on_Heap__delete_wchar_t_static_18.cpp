namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    goto source;
source:
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    printWcharLine(*data);
    delete data;
}
} 
