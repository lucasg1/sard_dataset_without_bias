void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
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
    FUN2(data);
}
void FUN1(int * data);
void FUN2(int * data)
{
    FUN1(data);
}
void FUN0(int * data)
{
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
