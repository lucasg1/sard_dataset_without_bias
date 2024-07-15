static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
    {
<START>
        printHexCharLine(data[0]);
<END>
    }
}
