void FUN0()
{
    goto sink;
sink:
    {
        char dest[DEST_SIZE];
<START>
        sprintf(dest, "%s %s", SOURCE_STRING);
<END>
        printLine(dest);
    }
}
