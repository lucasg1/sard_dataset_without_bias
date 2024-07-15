static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
<START>
            for (i = 0; i < 10; i++)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}
