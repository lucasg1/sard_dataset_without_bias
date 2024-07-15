static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_TRUE)
    {
        data = CHAR_MAX;
    }
    if(STATIC_CONST_TRUE)
    {
        if(data > 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
