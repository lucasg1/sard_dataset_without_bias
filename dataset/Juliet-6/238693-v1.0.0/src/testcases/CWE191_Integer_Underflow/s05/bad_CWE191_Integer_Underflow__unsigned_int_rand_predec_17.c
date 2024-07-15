void FUN0()
{
    int i,j;
    unsigned int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = (unsigned int)RAND32();
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            --data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
