static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = SHRT_MAX + 5;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
