static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        data = (char)RAND32();
    }
    if(staticTrue)
    {
        {
<START>
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
