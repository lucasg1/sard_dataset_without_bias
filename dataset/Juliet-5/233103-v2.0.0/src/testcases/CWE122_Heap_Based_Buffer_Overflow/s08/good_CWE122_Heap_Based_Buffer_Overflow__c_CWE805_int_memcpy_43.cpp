namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
} 
