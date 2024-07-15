void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN0(unsigned int data)
{
    FUN2(data);
}
void FUN2(unsigned int data)
{
    {
<START>
        data++;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
