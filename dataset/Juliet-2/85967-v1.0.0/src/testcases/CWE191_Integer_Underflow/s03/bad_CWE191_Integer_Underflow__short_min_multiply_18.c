void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MIN;
    goto sink;
sink:
    if(data < 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
