static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = 0;
    if(staticTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticTrue)
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
