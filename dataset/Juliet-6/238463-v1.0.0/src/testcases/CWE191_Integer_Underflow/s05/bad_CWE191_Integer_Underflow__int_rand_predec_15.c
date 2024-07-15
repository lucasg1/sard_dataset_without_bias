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
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
