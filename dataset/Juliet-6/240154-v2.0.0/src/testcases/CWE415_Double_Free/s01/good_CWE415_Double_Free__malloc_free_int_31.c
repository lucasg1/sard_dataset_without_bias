void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        int * dataCopy = data;
        int * data = dataCopy;
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        int * dataCopy = data;
        int * data = dataCopy;
        ; 
    }
}
