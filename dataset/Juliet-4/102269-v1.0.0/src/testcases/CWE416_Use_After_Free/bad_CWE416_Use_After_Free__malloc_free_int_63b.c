void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    free(data);
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
    printIntLine(data[0]);
<END>
}
