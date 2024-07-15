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
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
