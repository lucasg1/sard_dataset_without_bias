namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
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
} 
