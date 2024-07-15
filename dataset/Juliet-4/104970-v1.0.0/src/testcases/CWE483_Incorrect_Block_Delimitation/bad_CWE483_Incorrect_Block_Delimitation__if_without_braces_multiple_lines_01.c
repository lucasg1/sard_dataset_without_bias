void FUN0()
{ 
    int x,y;
    x = (rand() % 3);
    y = 0;
<START>
    if (x == 0)
<END>
        printLine("x == 0");
        y = 1;
    if (y)
    {
        printLine("x was 0\n");
    }
}
