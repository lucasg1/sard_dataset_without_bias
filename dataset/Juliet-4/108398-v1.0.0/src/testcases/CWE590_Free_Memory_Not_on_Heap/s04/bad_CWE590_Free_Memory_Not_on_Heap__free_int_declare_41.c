void FUN0(int * data)
{
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL; 
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
    FUN0(data);
}
