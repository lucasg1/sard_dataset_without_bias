void FUN0()
{
    int * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
