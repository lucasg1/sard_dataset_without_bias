void FUN0()
{
    int i;
    int * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            int dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
