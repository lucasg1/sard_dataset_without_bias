static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = INT_MIN;
    }
    if(staticTrue)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
