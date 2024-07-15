void FUN0()
{
    int h;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
