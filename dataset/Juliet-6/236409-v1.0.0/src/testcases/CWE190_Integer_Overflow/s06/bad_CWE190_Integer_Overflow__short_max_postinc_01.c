void FUN0()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
