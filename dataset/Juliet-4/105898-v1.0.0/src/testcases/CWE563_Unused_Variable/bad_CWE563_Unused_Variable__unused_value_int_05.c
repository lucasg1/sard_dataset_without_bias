static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    if(staticTrue)
    {
        data = 5;
    }
    if(staticTrue)
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}
