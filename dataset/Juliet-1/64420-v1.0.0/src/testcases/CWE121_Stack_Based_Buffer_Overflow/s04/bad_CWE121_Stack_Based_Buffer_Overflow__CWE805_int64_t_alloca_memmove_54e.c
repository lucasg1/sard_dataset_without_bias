void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataBadBuffer;
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
void FUN3(int64_t * data);
void FUN4(int64_t * data)
{
    FUN3(data);
}
void FUN2(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
    }
}
