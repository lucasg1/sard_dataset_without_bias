void FUN0()
{
    int data;
    data = 0;
    if(globalFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalFive==5)
    {
        {
<START>
            ++data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
