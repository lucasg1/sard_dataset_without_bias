void FUN0()
{
    {
        int * pointer = (int *)ALLOCA(sizeof(int));
<START>
        int data = *pointer; 
<END>
        printIntLine(data);
    }
}
