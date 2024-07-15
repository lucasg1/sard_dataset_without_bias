void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3(int64_t * data)
{
    FUN2(data);
}
void FUN4(int64_t * data);
void FUN0(int64_t * data)
{
    FUN4(data);
}
void FUN6(int64_t * data);
void FUN2(int64_t * data)
{
    FUN6(data);
}
void FUN1(int64_t * data);
void FUN9(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN11(int64_t * data)
{
    FUN3(data);
}
void FUN9(int64_t * data);
void FUN13()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN9(data);
}
void FUN11(int64_t * data);
void FUN15()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN11(data);
}
void FUN4(int64_t * data)
{
    ; 
}
void FUN6(int64_t * data)
{
    free(data);
}
