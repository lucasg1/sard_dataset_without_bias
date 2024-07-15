static int staticFive = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        data = (char)RAND32();
    }
    if(staticFive==5)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
