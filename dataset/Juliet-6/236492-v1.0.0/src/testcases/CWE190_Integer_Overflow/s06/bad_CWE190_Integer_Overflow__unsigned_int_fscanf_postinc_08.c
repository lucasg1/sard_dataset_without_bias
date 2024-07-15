static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    unsigned int data;
    data = 0;
    if(FUN0())
    {
        fscanf (stdin, "%u", &data);
    }
    if(FUN0())
    {
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
