namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
