int64_t * VAR0;
int64_t * VAR1;
void FUN0();
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataBadBuffer;
    VAR0 = data;
    FUN0();
}
extern int64_t * VAR0;
extern int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR0;
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
    }
}
