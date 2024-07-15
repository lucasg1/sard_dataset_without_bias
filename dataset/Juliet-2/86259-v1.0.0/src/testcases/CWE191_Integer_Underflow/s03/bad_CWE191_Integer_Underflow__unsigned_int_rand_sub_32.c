void FUN0()
{
    unsigned int data;
    unsigned int *dataPtr1 = &data;
    unsigned int *dataPtr2 = &data;
    data = 0;
    {
        unsigned int data = *dataPtr1;
        data = (unsigned int)RAND32();
        *dataPtr1 = data;
    }
    {
        unsigned int data = *dataPtr2;
        {
<START>
            unsigned int result = data - 1;
<END>
            printUnsignedLine(result);
        }
    }
}
