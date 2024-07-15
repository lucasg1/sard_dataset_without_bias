static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    data = NULL; 
    if(staticTrue)
    {
        {
            int * dataBuffer = (int *)ALLOCA(100*sizeof(int));
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
