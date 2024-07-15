static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i = 0;
            while(i++ < 10)
            {
                printLine("Inside the while statement");
            }
        }
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(staticTrue)
    {
        {
            int i = 0;
            while(i++ < 10)
            {
                printLine("Inside the while statement");
            }
        }
        printLine("Hello from good()");
    }
}
