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
            unsigned int result = data - 1;
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
        fscanf (stdin, "%u", &data);
        *dataPtr1 = data;
    }
    {
        unsigned int data = *dataPtr2;
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
