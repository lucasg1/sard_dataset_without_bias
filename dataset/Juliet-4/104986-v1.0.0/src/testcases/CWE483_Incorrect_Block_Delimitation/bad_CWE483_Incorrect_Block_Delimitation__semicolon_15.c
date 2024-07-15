void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int x = (rand() % 3);
        int y = 0;
<START>
        if (x == 0);
<END>
        {
            printLine("x == 0");
            y = 1;
        }
        if (y)
        {
            printLine("x was 0\n");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
