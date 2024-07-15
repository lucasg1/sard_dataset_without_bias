namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(1)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
