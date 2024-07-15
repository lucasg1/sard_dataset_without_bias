static int * FUN0(int * data)
{
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
