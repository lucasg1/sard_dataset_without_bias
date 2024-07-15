static int staticFive = 5;
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        data = (int64_t)RAND64();
    }
    if(staticFive==5)
    {
        {
<START>
            data++;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
