namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalTrue)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
