void FUN0() 
{
    int i = 0;
<START>
    for (i = 0; i >= 0; i = (i + 1) % 256)
<END>
    {
        printIntLine(i);
    }
}
