void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL; 
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
    FUN4(data);
}
void FUN1(int * data);
void FUN4(int * data)
{
    FUN1(data);
}
void FUN2(int * data)
{
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
