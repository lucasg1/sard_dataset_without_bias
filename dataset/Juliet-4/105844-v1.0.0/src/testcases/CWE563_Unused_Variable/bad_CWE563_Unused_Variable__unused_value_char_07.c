static int staticFive = 5;
void FUN0()
{
    char data;
    if(staticFive==5)
    {
        data = 'C';
    }
    if(staticFive==5)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
