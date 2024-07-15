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
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
<START>
            twoIntsStruct data = *pointer; 
<END>
            free(pointer);
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
