static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataGoodBuffer;
    }
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    if(staticTrue)
    {
        data = dataGoodBuffer;
    }
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
