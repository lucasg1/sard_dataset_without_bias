void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    funcPtr(data);
}
oid FUN2()
{
    FUN1();
}
