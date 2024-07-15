void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataGoodBuffer;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
        }
    }
}
