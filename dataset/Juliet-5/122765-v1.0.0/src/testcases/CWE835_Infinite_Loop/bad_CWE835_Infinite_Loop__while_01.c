void FUN0() 
{
    int i = 0;
<START>
    while(i >= 0)
<END>
    {
        printIntLine(i);
        i = (i + 1) % 256;
    }
}
