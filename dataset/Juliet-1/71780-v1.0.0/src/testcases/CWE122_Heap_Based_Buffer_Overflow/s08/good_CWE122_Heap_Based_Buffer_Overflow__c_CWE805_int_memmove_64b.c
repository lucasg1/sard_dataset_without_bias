void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
