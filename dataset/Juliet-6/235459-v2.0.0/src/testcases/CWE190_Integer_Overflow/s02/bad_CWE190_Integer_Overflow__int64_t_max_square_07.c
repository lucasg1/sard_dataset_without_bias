static int staticFive = 5;
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        data = LLONG_MAX;
    }
    if(staticFive==5)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
