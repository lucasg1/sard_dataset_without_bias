void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN1(unsigned int data);
void FUN3(unsigned int data)
{
    FUN1(data);
}
void FUN4(unsigned int data);
void FUN0(unsigned int data)
{
    FUN4(data);
}
void FUN3(unsigned int data);
void FUN7()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN3(data);
}
void FUN4(unsigned int data)
{
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
