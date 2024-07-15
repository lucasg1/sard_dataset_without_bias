static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
