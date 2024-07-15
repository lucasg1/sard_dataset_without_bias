void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3(int * data)
{
    FUN1(data);
}
void FUN3(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN3(data);
}
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
