static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = -1;
    if(staticTrue)
    {
        data = (short)RAND32();
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
