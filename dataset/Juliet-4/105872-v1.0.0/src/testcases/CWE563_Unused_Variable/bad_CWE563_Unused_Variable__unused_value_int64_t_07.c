static int staticFive = 5;
void FUN0()
{
    int64_t data;
    if(staticFive==5)
    {
        data = 5LL;
    }
    if(staticFive==5)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
