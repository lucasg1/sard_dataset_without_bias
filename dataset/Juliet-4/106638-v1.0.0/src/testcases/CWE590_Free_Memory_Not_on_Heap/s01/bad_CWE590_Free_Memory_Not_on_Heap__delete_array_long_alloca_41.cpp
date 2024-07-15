namespace NAMESPACE0
{
void FUN0(long * data)
{
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(100*sizeof(long));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    FUN0(data);
}
} 
