void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dest[DEST_SIZE];
<START>
        sprintf(dest, "%s %s", SOURCE_STRING);
<END>
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
