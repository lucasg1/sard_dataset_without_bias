void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        data = RAND32();
    }
    if(globalTrue)
    {
<START>
        printIntLine(100 % data);
<END>
    }
}
