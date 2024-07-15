void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
void FUN2(int * data)
{
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
