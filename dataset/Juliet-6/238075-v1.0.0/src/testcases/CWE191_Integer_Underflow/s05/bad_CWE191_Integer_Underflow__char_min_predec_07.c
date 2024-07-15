static int staticFive = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        data = CHAR_MIN;
    }
    if(staticFive==5)
    {
        {
<START>
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
