static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
