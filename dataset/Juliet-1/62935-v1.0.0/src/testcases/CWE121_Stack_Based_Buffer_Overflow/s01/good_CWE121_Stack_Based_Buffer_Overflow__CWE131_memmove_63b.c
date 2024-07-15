void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
