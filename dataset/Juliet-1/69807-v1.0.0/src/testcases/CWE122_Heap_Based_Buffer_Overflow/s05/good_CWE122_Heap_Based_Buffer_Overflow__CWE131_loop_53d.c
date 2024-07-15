void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
    FUN0(data);
}
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
void FUN5(int * data);
void FUN3(int * data)
{
    FUN5(data);
}
void FUN5(int * data)
{
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
