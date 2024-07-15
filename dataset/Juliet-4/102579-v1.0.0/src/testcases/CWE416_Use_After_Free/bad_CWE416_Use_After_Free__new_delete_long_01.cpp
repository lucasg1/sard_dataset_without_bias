namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    delete data;
<START>
    printLongLine(*data);
<END>
}
} 
