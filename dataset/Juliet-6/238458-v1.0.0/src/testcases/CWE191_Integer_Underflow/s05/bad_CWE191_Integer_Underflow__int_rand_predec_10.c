void FUN0()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        data = RAND32();
    }
    if(globalTrue)
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
