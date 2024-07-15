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
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
