void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    FUN2(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    free(data);
}
void FUN2(int * * dataPtr)
{
    int * data = *dataPtr;
    ; 
}
