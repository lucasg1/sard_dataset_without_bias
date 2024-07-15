static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char data;
    if(STATIC_CONST_TRUE)
    {
        data = 'C';
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
