namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
