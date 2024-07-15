static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        data = (int64_t)RAND64();
    }
    if(staticTrue)
    {
        {
<START>
            ++data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
