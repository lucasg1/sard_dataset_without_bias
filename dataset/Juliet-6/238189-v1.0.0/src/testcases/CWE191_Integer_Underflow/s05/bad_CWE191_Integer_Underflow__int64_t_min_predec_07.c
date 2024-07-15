static int staticFive = 5;
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        data = LLONG_MIN;
    }
    if(staticFive==5)
    {
        {
<START>
            --data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
