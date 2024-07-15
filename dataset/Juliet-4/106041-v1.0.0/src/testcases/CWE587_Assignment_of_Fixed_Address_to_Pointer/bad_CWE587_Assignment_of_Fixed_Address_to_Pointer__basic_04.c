static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            char *charPointer = (char*)0x400000;
<END>
            printHexCharLine(*charPointer);
        }
    }
}
