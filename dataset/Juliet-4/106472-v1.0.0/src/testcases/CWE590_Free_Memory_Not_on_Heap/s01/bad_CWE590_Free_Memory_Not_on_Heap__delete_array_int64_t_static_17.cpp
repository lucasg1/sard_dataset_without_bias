namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int64_t * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            static int64_t dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5LL;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
