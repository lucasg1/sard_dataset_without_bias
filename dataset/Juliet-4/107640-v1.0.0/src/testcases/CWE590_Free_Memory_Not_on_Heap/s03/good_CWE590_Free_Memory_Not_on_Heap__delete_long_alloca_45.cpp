namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR2;
    printLongLine(*data);
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
