void FUN0(int64_t * data);
void FUN1()
{
    int64_t data;
    data = 5LL;
    FUN0(&data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t data;
    ; 
    FUN2(&data);
}
void FUN0(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    printLongLongLine(data);
}
void FUN2(int64_t * dataPtr)
{
    *dataPtr = 5LL;
    int64_t data = *dataPtr;
    printLongLongLine(data);
}
