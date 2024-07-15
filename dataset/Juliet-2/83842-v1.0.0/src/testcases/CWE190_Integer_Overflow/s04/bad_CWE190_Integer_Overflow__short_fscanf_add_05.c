static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(staticTrue)
    {
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
