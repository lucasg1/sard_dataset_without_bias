namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
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
