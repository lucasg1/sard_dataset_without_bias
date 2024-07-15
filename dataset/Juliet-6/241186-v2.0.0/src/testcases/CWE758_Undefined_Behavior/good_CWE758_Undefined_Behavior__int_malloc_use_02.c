void FUN0()
{
    if(0)
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
void FUN1()
{
    if(1)
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
