void FUN0() 
{
    int i = 0;
    do
    {
        printIntLine(i);
        i = (i + 1) % 256;
<START>
    } while(i >= 0);
<END>
}
