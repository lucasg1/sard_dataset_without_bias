static int staticFive = 5;
void FUN0()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticFive==5)
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
