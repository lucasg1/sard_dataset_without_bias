void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL; 
    {
        int64_t * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        printLongLongLine(data[0]);
<START>
        free(data);
<END>
    }
}
