void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
    funcPtr(data);
}
void FUN0(int * data)
{
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
