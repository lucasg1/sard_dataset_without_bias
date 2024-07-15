void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    FUN0(data);
}
void FUN3(int * data);
void FUN4(int * data)
{
    FUN3(data);
}
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
void FUN3(int * data)
{
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
