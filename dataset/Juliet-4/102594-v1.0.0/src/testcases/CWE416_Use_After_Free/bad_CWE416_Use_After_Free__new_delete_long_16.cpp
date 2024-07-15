namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = new long;
        *data = 5L;
        delete data;
        break;
    }
    while(1)
    {
<START>
        printLongLine(*data);
<END>
        break;
    }
}
} 
