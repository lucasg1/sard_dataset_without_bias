static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        data = UINT_MAX;
    }
    if(staticTrue)
    {
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
