namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
