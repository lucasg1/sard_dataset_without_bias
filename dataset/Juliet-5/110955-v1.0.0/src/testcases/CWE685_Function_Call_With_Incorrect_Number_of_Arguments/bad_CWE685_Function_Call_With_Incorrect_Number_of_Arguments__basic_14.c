void FUN0()
{
    if(globalFive==5)
    {
        {
            char dest[DEST_SIZE];
<START>
            sprintf(dest, "%s %s", SOURCE_STRING);
<END>
            printLine(dest);
        }
    }
}
