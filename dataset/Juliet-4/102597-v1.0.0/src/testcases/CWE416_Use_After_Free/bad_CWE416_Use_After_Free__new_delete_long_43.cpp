namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long;
    *data = 5L;
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    printLongLine(*data);
<END>
}
} 
