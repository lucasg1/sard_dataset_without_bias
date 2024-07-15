static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t)RAND64();
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
