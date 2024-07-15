namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
