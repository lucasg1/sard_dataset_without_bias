static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = SHRT_MAX;
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            data++;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
