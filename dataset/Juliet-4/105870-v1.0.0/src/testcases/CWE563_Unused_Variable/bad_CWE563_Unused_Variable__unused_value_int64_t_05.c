static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t data;
    if(staticTrue)
    {
        data = 5LL;
    }
    if(staticTrue)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
