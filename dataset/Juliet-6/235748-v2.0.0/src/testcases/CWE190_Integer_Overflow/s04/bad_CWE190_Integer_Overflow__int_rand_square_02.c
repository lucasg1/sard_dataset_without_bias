void FUN0()
{
    int data;
    data = 0;
    if(1)
    {
        data = RAND32();
    }
    if(1)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
