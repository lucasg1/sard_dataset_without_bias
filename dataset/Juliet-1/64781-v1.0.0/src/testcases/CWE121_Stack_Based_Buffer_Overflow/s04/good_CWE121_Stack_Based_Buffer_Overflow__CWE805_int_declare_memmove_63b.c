void FUN0(int * * data);
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
