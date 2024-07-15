static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    long data;
    if(STATIC_CONST_TRUE)
    {
        data = 5L;
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
