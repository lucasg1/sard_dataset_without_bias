void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
