static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    float data;
    data = 0.0F;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%f", &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
