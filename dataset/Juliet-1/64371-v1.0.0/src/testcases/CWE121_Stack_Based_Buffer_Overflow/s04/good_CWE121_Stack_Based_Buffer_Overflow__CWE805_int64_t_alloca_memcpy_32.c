void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    {
        int64_t * data = *dataPtr1;
        data = dataGoodBuffer;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        {
            int64_t source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int64_t));
            printLongLongLine(data[0]);
        }
    }
}
