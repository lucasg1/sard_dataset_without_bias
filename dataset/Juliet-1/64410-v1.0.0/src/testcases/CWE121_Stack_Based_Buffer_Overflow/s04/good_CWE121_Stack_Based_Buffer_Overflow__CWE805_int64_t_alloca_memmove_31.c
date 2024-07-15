void FUN0()
{
    int64_t * data;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataGoodBuffer;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        {
            int64_t source[100] = {0}; 
            memmove(data, source, 100*sizeof(int64_t));
            printLongLongLine(data[0]);
        }
    }
}
