namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(long * data)
{
    if(VAR1)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    VAR1 = 1; 
    FUN0(data);
}
} 
