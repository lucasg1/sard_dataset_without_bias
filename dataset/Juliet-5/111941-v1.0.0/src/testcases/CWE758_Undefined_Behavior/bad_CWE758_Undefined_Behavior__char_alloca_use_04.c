static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char * pointer = (char *)ALLOCA(sizeof(char));
<START>
            char data = *pointer; 
<END>
            printHexCharLine(data);
        }
    }
}
