namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(globalFive==5)
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
