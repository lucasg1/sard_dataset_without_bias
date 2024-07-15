namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(sizeof(long));
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    {
        long * dataCopy = data;
        long * data = dataCopy;
        printLongLine(*data);
<START>
        delete data;
<END>
    }
}
} 
