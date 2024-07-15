void FUN0(long * data);
void FUN1()
{
    long data;
    data = 5L;
    FUN0(&data);
}
void FUN2(long * data);
void FUN3()
{
    long data;
    ; 
    FUN2(&data);
}
void FUN0(long * dataPtr)
{
    long data = *dataPtr;
    printLongLine(data);
}
void FUN2(long * dataPtr)
{
    *dataPtr = 5L;
    long data = *dataPtr;
    printLongLine(data);
}
