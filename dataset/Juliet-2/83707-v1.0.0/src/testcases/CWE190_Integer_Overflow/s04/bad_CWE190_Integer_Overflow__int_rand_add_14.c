void FUN0()
{
    int data;
    data = 0;
    if(globalFive==5)
    {
        data = RAND32();
    }
    if(globalFive==5)
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
