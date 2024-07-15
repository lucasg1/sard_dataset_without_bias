void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    FUN0(data);
}
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN2(int * data)
{
    FUN4(data);
}
void FUN6(int * data);
void FUN4(int * data)
{
    FUN6(data);
}
void FUN6(int * data)
{
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
