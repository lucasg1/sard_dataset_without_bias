void FUN0(int * data)
{
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    FUN0(data);
}
