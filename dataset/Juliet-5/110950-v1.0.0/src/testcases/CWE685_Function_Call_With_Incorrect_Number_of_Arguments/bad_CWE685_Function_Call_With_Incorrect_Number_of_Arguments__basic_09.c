void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
