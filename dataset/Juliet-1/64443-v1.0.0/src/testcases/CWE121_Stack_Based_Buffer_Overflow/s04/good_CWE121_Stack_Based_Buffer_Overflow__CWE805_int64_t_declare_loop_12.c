void FUN0()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    if(globalReturnsTrueOrFalse())
    {
        data = dataGoodBuffer;
    }
    else
    {
        data = dataGoodBuffer;
    }
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
