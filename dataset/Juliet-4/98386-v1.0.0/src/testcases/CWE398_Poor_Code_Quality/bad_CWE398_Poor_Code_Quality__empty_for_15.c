void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int i;
<START>
        for (i = 0; i < 10; i++)
<END>
        {
        }
    }
    printLine("Hello from bad()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
