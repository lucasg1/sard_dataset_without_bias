void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}
