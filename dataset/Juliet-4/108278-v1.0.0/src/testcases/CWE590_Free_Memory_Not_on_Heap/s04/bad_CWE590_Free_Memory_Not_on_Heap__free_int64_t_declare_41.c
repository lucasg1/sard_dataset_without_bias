void FUN0(int64_t * data)
{
    printLongLongLine(data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    int64_t * data;
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
    FUN0(data);
}
