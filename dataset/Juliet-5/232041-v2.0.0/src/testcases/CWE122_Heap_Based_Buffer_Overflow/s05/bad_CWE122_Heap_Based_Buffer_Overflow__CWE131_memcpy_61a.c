int * FUN0(int * data)
{
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    return data;
}
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
