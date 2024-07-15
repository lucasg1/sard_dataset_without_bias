void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    {
        int64_t * data = *dataPtr1;
        data = dataBadBuffer;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        {
            int64_t source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
        }
    }
}
