void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
    FUN1(data);
}
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
