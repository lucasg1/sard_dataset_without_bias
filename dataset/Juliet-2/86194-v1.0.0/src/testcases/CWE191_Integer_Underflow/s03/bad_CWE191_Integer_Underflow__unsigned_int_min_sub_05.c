static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        data = 0;
    }
    if(staticTrue)
    {
        {
<START>
            unsigned int result = data - 1;
<END>
            printUnsignedLine(result);
        }
    }
}
