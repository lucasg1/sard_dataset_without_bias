void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    FUN1(data);
}
void FUN5(int * data);
void FUN0(int * data)
{
    FUN5(data);
}
void FUN5(int * data)
{
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
