void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    FUN0(data);
}
void FUN0(int * data)
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
