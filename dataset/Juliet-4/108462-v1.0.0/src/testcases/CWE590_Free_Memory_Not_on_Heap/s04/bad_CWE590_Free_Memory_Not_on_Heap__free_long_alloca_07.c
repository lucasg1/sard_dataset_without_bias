static int staticFive = 5;
void FUN0()
{
    long * data;
    data = NULL; 
    if(staticFive==5)
    {
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
    }
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
