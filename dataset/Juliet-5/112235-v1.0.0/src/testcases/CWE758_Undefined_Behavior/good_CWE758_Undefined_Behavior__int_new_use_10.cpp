namespace NAMESPACE0
{
void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int data;
            data = 5;
            int * pointer = new int;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            int data;
            data = 5;
            int * pointer = new int;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            delete pointer;
        }
    }
}
} 
