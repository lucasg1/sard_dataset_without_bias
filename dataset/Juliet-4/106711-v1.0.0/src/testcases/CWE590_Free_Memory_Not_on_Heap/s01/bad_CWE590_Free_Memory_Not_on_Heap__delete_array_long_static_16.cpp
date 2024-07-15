namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    while(1)
    {
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
        break;
    }
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
