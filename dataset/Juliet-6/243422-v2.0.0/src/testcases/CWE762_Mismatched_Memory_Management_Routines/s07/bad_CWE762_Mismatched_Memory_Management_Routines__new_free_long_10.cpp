namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 
