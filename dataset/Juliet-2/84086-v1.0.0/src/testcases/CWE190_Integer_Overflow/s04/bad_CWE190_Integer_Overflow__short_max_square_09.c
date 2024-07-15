void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = SHRT_MAX;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
