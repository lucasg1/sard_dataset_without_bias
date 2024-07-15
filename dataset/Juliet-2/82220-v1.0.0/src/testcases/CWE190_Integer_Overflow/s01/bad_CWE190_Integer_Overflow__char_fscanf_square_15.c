void FUN0()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        fscanf (stdin, "%c", &data);
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
        char result = data * data;
<END>
        printHexCharLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
