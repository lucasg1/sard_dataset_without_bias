void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = SHRT_MIN;
    }
    if(GLOBAL_CONST_TRUE)
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
