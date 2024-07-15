namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 
