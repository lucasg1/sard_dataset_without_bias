namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(1)
    {
        {
            long * dataBuffer = (long *)ALLOCA(sizeof(long));
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
