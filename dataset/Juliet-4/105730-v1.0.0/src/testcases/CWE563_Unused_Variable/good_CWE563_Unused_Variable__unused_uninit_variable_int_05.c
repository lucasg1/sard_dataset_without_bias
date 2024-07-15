static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    ; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    ; 
    if(staticTrue)
    {
        data = 5;
        printIntLine(data);
    }
}
