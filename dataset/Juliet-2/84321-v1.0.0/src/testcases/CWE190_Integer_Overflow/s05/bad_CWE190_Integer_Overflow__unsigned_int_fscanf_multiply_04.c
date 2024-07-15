static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%u", &data);
    }
    if(STATIC_CONST_TRUE)
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
