void FUN0()
{
    int i;
    long * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            long dataBuffer[100];
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
