void FUN0(unsigned int data)
{
    {
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(unsigned int data)
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
}
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN2(data);
}
