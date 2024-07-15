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
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
