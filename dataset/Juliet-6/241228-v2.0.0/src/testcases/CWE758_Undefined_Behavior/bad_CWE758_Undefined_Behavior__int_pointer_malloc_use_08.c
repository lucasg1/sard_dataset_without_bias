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
    if(FUN0())
    {
        {
            int * * pointer = (int * *)malloc(sizeof(int *));
            if (pointer == NULL) {exit(-1);}
<START>
            int * data = *pointer; 
<END>
            free(pointer);
            printIntLine(*data);
        }
    }
}
