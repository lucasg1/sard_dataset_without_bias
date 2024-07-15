void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
