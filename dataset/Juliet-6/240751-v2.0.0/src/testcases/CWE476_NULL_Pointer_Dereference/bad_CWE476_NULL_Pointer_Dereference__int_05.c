static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
    {
<START>
        printIntLine(*data);
<END>
    }
}
