void FUN0()
{
    int data;
    switch(6)
    {
    case 6:
        data = 5;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        data = 10;
<END>
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
