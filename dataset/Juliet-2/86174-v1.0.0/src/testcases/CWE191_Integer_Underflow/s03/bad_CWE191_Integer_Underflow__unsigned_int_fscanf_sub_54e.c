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
void FUN4(unsigned int data);
void FUN2(unsigned int data)
{
    FUN4(data);
}
void FUN6(unsigned int data);
void FUN4(unsigned int data)
{
    FUN6(data);
}
void FUN6(unsigned int data)
{
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
