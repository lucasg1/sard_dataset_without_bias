static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%c", &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
