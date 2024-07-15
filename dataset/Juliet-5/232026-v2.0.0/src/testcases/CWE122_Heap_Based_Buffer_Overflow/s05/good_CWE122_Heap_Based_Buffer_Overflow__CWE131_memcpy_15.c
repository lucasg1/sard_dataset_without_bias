void FUN0()
{
    int * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
