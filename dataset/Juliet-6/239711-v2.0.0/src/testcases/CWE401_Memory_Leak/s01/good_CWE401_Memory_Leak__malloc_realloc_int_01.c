void FUN0()
{
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        int * tmpData;
        data[0] = 5;
        printIntLine(data[0]);
        tmpData = (int *)realloc(data, (130000)*sizeof(int));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0] = 10;
            printIntLine(data[0]);
        }
        free(data);
    }
}
