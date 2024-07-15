namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(1)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
