namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(5==5)
    {
        data = new wchar_t;
        delete data;
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
