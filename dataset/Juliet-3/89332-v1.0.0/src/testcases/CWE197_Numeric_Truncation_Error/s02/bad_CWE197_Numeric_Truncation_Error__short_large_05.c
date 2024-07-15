static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = -1;
    if(staticTrue)
    {
        data = CHAR_MAX + 1;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
