namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
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
    {
        long * data = dataRef;
        printLongLine(data[0]);
<START>
        free(data);
<END>
    }
}
} 
