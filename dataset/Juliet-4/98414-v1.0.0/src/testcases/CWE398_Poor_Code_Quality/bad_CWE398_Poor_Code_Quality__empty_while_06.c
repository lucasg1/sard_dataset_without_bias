static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i = 0;
<START>
            while(i++ < 10)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}
