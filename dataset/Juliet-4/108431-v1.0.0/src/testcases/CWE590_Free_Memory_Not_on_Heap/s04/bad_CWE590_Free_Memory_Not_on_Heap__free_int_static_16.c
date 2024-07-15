void FUN0()
{
    int * data;
    data = NULL; 
    while(1)
    {
        {
            static int dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5;
                }
            }
            data = dataBuffer;
        }
        break;
    }
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
