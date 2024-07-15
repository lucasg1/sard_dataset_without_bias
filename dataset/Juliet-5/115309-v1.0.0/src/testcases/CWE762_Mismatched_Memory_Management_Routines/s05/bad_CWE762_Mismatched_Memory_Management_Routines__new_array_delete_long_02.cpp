namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long[100];
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
