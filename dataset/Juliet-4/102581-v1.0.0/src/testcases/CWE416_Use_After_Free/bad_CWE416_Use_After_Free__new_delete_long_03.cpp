namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(5==5)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
