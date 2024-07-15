void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = SHRT_MAX;
        break;
    }
    while(1)
    {
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
        break;
    }
}
