static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(staticTrue)
    {
        {
<START>
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
