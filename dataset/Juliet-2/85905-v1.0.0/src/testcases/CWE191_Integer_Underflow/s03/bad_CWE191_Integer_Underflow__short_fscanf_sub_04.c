static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
