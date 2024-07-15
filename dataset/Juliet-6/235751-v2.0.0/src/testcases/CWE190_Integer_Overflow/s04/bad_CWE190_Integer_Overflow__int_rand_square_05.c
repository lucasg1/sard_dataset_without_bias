static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        data = RAND32();
    }
    if(staticTrue)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
