void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(50*sizeof(int));
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN2(int * data)
{
    FUN4(data);
}
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
void FUN4(int * data)
{
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
