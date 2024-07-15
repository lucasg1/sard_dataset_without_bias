namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
