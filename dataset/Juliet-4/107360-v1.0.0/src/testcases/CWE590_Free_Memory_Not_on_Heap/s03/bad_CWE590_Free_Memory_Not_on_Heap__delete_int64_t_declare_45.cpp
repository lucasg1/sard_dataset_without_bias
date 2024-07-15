namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR1;
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
