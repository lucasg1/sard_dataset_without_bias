void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
