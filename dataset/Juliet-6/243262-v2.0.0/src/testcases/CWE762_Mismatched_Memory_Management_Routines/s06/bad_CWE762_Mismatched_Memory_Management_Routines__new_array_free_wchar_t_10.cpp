namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 
