namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t * dataBuffer = new int64_t[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    printLongLongLine(data[0]);
    delete [] data;
}
} 
