void FUN0(long * data)
{
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL; 
    {
        static long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    funcPtr(data);
}
