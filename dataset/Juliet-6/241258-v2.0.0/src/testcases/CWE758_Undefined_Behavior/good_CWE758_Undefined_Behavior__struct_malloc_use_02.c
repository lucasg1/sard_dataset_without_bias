void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
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
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
            free(pointer);
        }
    }
}
