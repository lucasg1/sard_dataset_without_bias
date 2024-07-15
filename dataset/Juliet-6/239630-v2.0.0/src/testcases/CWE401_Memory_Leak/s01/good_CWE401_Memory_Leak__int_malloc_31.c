void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        free(data);
    }
}
