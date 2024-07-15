void FUN0()
{
    goto sink;
sink:
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
