void FUN0()
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
