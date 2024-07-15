void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataBadBuffer;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
    {
        int64_t source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
    }
}
