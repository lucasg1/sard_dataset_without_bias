namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalTrue)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
