static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = INT_MIN;
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
