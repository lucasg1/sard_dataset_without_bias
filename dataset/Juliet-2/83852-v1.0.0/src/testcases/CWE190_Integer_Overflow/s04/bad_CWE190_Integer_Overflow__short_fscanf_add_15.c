void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%hd", &data);
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
        short result = data + 1;
<END>
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
