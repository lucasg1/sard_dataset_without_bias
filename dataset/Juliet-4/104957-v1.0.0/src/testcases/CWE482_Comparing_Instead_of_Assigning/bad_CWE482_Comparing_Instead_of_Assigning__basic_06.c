static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
<START>
            VAR0 == 5;
<END>
            printIntLine(VAR0);
        }
    }
}
