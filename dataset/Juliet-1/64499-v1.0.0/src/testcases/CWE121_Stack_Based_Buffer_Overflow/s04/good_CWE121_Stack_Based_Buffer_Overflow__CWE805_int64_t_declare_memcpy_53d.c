void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN5()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    FUN3(data);
}
void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
