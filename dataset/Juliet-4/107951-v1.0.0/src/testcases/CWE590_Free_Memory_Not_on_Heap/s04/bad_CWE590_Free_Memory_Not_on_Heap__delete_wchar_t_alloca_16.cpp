namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    while(1)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)ALLOCA(sizeof(wchar_t));
            *dataBuffer = L'A';
            data = dataBuffer;
        }
        break;
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
