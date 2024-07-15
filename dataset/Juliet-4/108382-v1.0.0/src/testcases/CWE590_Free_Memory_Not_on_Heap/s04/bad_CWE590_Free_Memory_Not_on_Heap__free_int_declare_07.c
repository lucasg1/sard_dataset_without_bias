static int staticFive = 5;
void FUN0()
{
    int * data;
    data = NULL; 
    if(staticFive==5)
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
