static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            data--;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
