static int VAR0 = 0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR0 = 1; 
    FUN0(data);
}
