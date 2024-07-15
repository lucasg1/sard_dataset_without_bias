void FUN0()
{
    goto sink;
sink:
    {
        char dest[DEST_SIZE];
        sprintf(dest, "%s %s", SOURCE_STRING, SOURCE_STRING);
        printLine(dest);
    }
}
