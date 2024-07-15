void FUN0()
{
    float data;
    data = 0.0F;
    switch(6)
    {
    case 6:
        data = 0.0F;
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
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
