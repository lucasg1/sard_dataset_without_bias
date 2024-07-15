int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    return data;
}
int64_t * FUN1(int64_t * data)
{
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    return data;
}
int64_t * FUN0(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
int64_t * FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}
