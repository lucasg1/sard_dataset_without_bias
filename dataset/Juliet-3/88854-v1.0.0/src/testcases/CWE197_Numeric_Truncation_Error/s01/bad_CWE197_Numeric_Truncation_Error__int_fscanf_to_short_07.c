static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
