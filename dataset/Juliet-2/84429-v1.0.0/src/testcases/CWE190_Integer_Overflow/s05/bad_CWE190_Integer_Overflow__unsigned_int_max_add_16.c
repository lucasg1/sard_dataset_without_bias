void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = UINT_MAX;
        break;
    }
    while(1)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
        break;
    }
}
