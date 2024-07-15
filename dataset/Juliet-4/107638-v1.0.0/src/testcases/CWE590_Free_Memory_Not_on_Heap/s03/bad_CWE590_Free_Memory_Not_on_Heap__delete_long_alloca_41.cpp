namespace NAMESPACE0
{
void FUN0(long * data)
{
    printLongLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(sizeof(long));
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
