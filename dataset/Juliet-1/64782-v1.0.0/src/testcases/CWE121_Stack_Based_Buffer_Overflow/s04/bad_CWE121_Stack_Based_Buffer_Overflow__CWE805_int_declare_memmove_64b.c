void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR0;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
