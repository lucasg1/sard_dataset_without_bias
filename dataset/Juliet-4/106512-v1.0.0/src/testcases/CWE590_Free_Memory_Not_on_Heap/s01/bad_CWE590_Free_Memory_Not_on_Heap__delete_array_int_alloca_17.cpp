namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
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
    delete [] data;
<END>
}
} 
