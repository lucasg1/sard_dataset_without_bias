static int * FUN0(int * data)
{
    data = (int *)malloc(50*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
