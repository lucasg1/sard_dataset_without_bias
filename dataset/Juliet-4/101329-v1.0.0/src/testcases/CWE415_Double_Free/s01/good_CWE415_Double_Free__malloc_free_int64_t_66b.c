void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int64_t * dataArray[]);
void FUN3()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    free(data);
}
void FUN2(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    ; 
}
