void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL; 
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
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
