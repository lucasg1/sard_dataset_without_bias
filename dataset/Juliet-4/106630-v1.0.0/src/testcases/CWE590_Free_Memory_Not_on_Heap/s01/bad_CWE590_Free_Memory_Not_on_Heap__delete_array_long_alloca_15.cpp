namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
