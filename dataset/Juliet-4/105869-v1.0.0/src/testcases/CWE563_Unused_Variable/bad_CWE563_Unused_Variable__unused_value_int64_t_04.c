static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int64_t data;
    if(STATIC_CONST_TRUE)
    {
        data = 5LL;
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
