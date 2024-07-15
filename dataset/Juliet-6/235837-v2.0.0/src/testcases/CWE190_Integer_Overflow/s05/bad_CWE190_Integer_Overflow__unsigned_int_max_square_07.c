static int staticFive = 5;
void FUN0()
{
    unsigned int data;
    data = 0;
    if(staticFive==5)
    {
        data = UINT_MAX;
    }
    if(staticFive==5)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
