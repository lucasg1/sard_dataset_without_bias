static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%u", &data);
    }
    if(STATIC_CONST_FIVE==5)
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
