namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
