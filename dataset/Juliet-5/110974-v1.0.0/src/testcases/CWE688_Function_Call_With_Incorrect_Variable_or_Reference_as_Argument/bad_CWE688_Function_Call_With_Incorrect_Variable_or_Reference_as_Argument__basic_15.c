void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dest[DEST_SIZE];
        int intFive = 5;
<START>
        sprintf(dest, "%s", intFive);
<END>
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
