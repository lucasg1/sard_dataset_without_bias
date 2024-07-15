static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        data = CHAR_MAX;
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
