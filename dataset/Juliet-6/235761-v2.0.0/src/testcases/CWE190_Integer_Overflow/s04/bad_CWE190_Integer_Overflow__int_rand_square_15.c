void FUN0()
{
    int data;
    data = 0;
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
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
