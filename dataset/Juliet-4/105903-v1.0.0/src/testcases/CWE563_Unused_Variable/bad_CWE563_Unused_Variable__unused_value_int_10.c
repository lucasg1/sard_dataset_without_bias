void FUN0()
{
    int data;
    if(globalTrue)
    {
        data = 5;
    }
    if(globalTrue)
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}
