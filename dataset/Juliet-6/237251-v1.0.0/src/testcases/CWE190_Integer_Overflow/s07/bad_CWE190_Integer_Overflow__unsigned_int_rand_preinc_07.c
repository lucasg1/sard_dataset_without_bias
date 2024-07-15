static int staticFive = 5;
void FUN0()
{
    unsigned int data;
    data = 0;
    if(staticFive==5)
    {
        data = (unsigned int)RAND32();
    }
    if(staticFive==5)
    {
        {
<START>
            ++data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
