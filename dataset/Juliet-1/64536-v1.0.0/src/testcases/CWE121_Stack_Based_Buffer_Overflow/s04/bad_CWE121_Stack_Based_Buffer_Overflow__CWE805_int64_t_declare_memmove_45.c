static int64_t * VAR0;
static int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR0;
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
<START>
    data = dataBadBuffer;
<END>
    VAR0 = data;
    FUN0();
}
