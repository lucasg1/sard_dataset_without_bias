static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
