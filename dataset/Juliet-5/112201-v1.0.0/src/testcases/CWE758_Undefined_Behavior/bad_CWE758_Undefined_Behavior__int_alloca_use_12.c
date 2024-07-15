void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
<START>
            int data = *pointer; 
<END>
            printIntLine(data);
        }
    }
    else
    {
        {
            int data;
            int * pointer = (int *)ALLOCA(sizeof(int));
            data = 5;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
        }
    }
}
