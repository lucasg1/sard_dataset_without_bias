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
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
        break;
    }
}
