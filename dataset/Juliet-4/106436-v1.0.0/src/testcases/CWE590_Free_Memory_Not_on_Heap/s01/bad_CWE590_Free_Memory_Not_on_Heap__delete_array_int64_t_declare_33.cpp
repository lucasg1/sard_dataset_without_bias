namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; 
    {
        int64_t dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    {
        int64_t * data = dataRef;
        printLongLongLine(data[0]);
<START>
        delete [] data;
<END>
    }
}
} 
