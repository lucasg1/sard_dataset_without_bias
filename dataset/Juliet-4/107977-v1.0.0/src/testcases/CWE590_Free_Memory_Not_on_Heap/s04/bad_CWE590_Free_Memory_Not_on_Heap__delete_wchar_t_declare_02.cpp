namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(1)
    {
        {
            wchar_t dataBuffer;
            dataBuffer = L'A';
            data = &dataBuffer;
        }
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
