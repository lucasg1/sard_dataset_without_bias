void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    data = RAND32();
    goto sink;
sink:
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
