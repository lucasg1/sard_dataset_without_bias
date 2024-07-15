void FUN0(int64_t * * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    FUN0(&data);
}
void FUN2(int64_t * * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    FUN2(&data);
}
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    free(data);
}
void FUN2(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    ; 
}
