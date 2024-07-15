void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    fscanf (stdin, "%hd", &data);
    goto sink;
sink:
    if(data < 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
