void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        fscanf (stdin, "%u", &data);
        break;
    }
    while(1)
    {
        if (data > 0)
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        break;
    }
}
