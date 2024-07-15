void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)ALLOCA(10*sizeof(int));
        break;
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
