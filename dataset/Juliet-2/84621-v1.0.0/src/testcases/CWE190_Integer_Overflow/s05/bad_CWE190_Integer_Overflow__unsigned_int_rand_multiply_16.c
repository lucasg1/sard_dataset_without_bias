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
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
        break;
    }
}
