static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        data = 0;
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
