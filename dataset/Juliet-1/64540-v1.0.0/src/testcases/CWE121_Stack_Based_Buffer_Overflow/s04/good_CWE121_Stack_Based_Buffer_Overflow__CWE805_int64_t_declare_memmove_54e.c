void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    FUN2(data);
}
void FUN1(int64_t * data);
void FUN6(int64_t * data)
{
    FUN1(data);
}
void FUN6(int64_t * data);
void FUN2(int64_t * data)
{
    FUN6(data);
}
void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
