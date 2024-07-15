namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR1;
    printLongLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        static long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
