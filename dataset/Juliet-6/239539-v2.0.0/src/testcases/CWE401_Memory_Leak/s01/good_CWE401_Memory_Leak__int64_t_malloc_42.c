static int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
static int64_t * FUN2(int64_t * data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    return data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
