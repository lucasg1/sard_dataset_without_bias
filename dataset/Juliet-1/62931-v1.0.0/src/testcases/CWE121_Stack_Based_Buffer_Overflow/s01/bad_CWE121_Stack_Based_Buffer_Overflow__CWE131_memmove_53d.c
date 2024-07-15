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
    data = (int *)ALLOCA(10);
    FUN1(data);
}
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
void FUN4(int * data)
{
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
