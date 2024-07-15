void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN2(data);
}
void FUN5(int64_t * data);
void FUN6(int64_t * data)
{
    FUN5(data);
}
void FUN7(int64_t * data);
void FUN8(int64_t * data)
{
    FUN7(data);
}
void FUN6(int64_t * data);
void FUN0(int64_t * data)
{
    FUN6(data);
}
void FUN8(int64_t * data);
void FUN2(int64_t * data)
{
    FUN8(data);
}
void FUN5(int64_t * data)
{
    ; 
}
void FUN7(int64_t * data)
{
    free(data);
}
