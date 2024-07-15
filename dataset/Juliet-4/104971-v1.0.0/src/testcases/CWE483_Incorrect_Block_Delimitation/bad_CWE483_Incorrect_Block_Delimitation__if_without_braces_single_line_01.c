void FUN0()
{
    int x,y;
    x = (rand() % 3);
    y = 0;
<START>
    if (x == 0) printLine("x == 0"); y = 1;
<END>
    if (y) 
    {
        printLine("x was 0\n");
    }
}
