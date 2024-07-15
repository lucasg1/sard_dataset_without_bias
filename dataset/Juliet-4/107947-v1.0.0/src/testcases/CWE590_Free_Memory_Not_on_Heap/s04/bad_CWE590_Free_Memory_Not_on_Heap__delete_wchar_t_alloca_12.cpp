namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * dataBuffer = (wchar_t *)ALLOCA(sizeof(wchar_t));
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    else
    {
        {
            wchar_t * dataBuffer = new wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
