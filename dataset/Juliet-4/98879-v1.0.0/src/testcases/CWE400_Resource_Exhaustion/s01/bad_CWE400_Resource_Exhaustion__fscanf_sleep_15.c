void FUN0()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &count);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
