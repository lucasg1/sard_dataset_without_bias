static int staticFive = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(staticFive==5)
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
