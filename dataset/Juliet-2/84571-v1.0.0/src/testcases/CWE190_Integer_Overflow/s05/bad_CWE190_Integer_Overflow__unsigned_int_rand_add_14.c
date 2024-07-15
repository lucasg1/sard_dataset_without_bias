void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalFive==5)
    {
        data = (unsigned int)RAND32();
    }
    if(globalFive==5)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}
