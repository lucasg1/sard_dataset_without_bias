void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)malloc(50*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
