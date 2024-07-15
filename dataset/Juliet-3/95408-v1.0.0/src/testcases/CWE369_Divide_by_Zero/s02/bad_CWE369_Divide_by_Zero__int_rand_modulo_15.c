void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = RAND32();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(100 % data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
