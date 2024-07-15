namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(long * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    delete data;
    VAR1 = 1; 
    FUN0(data);
}
} 
