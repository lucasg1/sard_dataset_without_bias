static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = (short)RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
