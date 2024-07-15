void FUN0(int64_t * * data);
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    FUN0(&data);
}
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
