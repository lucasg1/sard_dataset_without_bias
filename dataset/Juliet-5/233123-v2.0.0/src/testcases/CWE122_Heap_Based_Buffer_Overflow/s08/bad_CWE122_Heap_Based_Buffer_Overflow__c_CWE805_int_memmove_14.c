void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (int *)malloc(50*sizeof(int));
        if (data == NULL) {exit(-1);}
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
