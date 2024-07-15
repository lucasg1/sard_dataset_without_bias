void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
