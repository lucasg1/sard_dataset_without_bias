void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int i = 0;
<START>
        while(i++ < 10)
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
