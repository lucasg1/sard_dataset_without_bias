void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
void FUN5(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    FUN5(data);
}
void FUN2(int * data)
{
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
