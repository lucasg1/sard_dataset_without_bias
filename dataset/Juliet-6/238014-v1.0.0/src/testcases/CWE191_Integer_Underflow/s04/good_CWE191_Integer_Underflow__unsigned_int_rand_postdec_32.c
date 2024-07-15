void FUN0()
{
    unsigned int data;
    unsigned int *dataPtr1 = &data;
    unsigned int *dataPtr2 = &data;
    data = 0;
    {
        unsigned int data = *dataPtr1;
        data = -2;
        *dataPtr1 = data;
    }
    {
        unsigned int data = *dataPtr2;
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
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
        if (data > 0)
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
