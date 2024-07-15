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
        if(data < 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
