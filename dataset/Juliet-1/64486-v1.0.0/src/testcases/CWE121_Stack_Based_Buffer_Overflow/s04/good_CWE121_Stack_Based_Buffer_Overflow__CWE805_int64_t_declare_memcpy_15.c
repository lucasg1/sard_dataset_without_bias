void FUN0()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = dataGoodBuffer;
        break;
    }
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    switch(6)
    {
    case 6:
        data = dataGoodBuffer;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
