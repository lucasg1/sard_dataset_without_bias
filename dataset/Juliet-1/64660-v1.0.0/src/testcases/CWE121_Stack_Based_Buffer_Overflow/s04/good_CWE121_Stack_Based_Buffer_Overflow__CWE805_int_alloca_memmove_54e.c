void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
    FUN2(data);
}
void FUN5(int * data);
void FUN0(int * data)
{
    FUN5(data);
}
void FUN1(int * data);
void FUN2(int * data)
{
    FUN1(data);
}
void FUN5(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
