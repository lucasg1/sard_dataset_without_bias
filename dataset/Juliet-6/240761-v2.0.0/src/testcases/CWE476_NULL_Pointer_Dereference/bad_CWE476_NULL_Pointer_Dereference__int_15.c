void FUN0()
{
    int * data;
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
