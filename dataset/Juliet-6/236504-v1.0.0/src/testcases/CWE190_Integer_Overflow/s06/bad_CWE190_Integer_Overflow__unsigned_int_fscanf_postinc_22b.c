int VAR0 = 0;
void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(unsigned int data)
{
    if(VAR0)
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
