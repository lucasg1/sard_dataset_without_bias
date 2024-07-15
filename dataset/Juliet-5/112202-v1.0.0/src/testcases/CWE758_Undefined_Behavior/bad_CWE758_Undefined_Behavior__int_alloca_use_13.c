void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
<START>
            int data = *pointer; 
<END>
            printIntLine(data);
        }
    }
}
