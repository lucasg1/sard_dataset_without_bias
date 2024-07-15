void FUN0(int * * data);
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
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
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
    FUN2(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(data[0]);
}
void FUN2(int * * dataPtr)
{
    int * data = *dataPtr;
    ; 
}
