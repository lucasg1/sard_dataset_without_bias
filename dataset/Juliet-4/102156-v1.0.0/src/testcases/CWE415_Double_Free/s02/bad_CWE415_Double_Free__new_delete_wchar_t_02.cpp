namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = new wchar_t;
        delete data;
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
