void FUN0()
{
    int h;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
