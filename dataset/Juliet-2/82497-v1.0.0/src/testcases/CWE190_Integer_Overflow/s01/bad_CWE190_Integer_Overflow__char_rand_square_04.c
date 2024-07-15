static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_TRUE)
    {
        data = (char)RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
