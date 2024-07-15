static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    if(staticTrue)
    {
        data = 'C';
    }
    if(staticTrue)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
