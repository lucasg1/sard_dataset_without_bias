void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
