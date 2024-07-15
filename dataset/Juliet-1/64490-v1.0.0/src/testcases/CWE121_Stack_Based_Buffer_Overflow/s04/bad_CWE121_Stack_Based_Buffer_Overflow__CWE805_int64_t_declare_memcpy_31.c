void FUN0()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataBadBuffer;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        {
            int64_t source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
        }
    }
}
