static int64_t * VAR0;
static int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR0;
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
<START>
    data = dataBadBuffer;
<END>
    VAR0 = data;
    FUN0();
}
