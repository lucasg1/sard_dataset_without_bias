void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = (unsigned int)RAND32();
        break;
    }
    while(1)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
        break;
    }
}
