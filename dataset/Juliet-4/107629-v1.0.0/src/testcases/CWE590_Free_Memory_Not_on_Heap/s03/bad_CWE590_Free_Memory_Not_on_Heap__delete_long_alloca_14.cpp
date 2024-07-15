namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(globalFive==5)
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
