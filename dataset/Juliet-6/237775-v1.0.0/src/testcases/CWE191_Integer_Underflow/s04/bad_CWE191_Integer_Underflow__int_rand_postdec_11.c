void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = RAND32();
    }
    if(globalReturnsTrue())
    {
        {
<START>
            data--;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
