void FUN0(int * data)
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
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
