static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int data;
            int * pointer = (int *)malloc(sizeof(int));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            free(pointer);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            int data;
            int * pointer = (int *)malloc(sizeof(int));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            free(pointer);
        }
    }
}
