static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = SHRT_MIN;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            --data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
