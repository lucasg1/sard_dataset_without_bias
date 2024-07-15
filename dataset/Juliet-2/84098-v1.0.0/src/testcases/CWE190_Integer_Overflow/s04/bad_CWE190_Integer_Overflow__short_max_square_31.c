void FUN0()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
