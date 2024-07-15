static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
