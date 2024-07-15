namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalFive==5)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
