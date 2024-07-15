static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(staticFive==5)
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
