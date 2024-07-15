void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = (short)RAND32();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
