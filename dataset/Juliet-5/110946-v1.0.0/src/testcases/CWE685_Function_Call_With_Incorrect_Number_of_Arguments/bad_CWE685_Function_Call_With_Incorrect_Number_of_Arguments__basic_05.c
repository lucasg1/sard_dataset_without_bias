static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
